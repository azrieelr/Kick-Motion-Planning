#include "common/config.h"
#include "common/linux.h"

#include <fstream>

Config::ParamBase::ParamBase(std::string key)
{
  key_ = key;
  comment_ = "";
}

Config::Section::Section(std::string name)
{
  name_ = name;

  param_list_.clear();
  param_map_.clear();
}

Config::Section::~Section()
{
  for (ParamBase *param : param_list_)
    delete param;

  param_list_.clear();
  param_map_.clear();
}

void Config::Section::removeParam(std::string key)
{
  if (param_map_.find(key) == param_map_.end())
    return;

  ParamBase *param = param_map_[key];
  param_list_.remove(param);
  param_map_.erase(key);
  delete param;
}

Config::ParamBase *Config::Section::getParamBase(std::string key)
{
  if (param_map_.find(key) == param_map_.end())
    return nullptr;

  return param_map_[key];
}

void Config::Section::reset()
{
  for (ParamBase *param : param_list_)
  {
    param->reset();
  }
}

void Config::Section::parse(const YAML::Node &node)
{
  for (YAML::const_iterator it = node.begin(); it != node.end(); ++it)
  {
    std::string key;
    // it.first() >> key;

    ParamBase *param = getParamBase(key);
    if (param == nullptr)
    {
      std::string value;
      // it.second() >> value;

      param = addParam<std::string>(key, value);
    }

    // param->parse(it.second());
  }
}

void Config::Section::emit(YAML::Emitter &emitter)
{
  emitter << YAML::Key << getName();

  if (param_list_.size() > 0)
  {
    emitter << YAML::Value <<  YAML::BeginMap;
    for (std::list<ParamBase *>::const_iterator it = param_list_.begin(); it != param_list_.end(); ++it)
    {
      (*it)->emit(emitter);
    }
    emitter << YAML::EndMap;
  }
  else
  {
    emitter << YAML::Value << YAML::Null;
  }

  emitter << YAML::Newline;
}

Config::Config()
{
  section_list_.clear();
  section_map_.clear();
}

Config::~Config()
{
  for (Section *section : section_list_)
    delete section;

  section_list_.clear();
  section_map_.clear();
}

Config::Section *Config::addSection(std::string name)
{
  if (section_map_.find(name) != section_map_.end())
    removeSection(name);

  Section *section = new Section(name);
  section_list_.push_back(section);
  section_map_.emplace(name, section);

  return section;
}

void Config::removeSection(std::string name)
{
  if (section_map_.find(name) == section_map_.end())
    return;

  Section *section = section_map_[name];
  section_list_.remove(section);
  section_map_.erase(name);
  delete section;
}

Config::Section *Config::getSection(std::string name)
{
  if (section_map_.find(name) == section_map_.end())
    return nullptr;

  return section_map_[name];
}

void Config::reset()
{
  for (Section *section : section_list_)
  {
    section->reset();
  }
}

bool Config::load(std::string path)
{
  std::stringstream ss;
  ss << "/home/" << linux_lib::getEnv("USER") << "/data/" <<  linux_lib::getHostName() << "/" << path;

  if (linux_lib::isFileExist(ss.str()) == false)
  {
    if (save(path) == false)
      return false;
  }

  std::ifstream input(ss.str(), std::ifstream::in);
  if (input.is_open() == false)
    return false;

  input.close();

  return true;
}

bool Config::save(std::string path)
{
  std::stringstream ss;
  ss << "/home/" << linux_lib::getEnv("USER") << "/data/" <<  linux_lib::getHostName() << "/" << path;

  YAML::Emitter emitter;

  emit(emitter);

  if (linux_lib::isFileExist(ss.str()) == false)
  {
    if (linux_lib::createFile(ss.str()) == false)
      return false;
  }

  std::ofstream output(ss.str(), std::ofstream::out);
  if (output.is_open() == false)
    return false;

  output << emitter.c_str();
  output.close();

  return true;
}

bool Config::sync(std::string path)
{
  if (!load(path))
    return false;

  if (!save(path))
    return false;

  return true;
}

void Config::emit(YAML::Emitter &emitter)
{
  if (section_list_.size() > 0)
  {
    emitter << YAML::BeginMap;
    for (std::list<Section *>::const_iterator it = section_list_.begin(); it != section_list_.end(); ++it)
    {
      (*it)->emit(emitter);
    }
    emitter << YAML::EndMap;
  }
  else
  {
    emitter << YAML::Null;
  }
}