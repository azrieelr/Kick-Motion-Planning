#ifndef CONFIG_H_
#define CONFIG_H_

#include <string>
#include <list>
#include <map>

#include <yaml-cpp/yaml.h>

class Config
{
public:

  class ParamBase
  {
  public:

    ParamBase(std::string key);
    virtual ~ParamBase() { }

    std::string getKey() { return key_; }

    std::string getComment() { return comment_; }
    void setComment(std::string comment) { comment_ = comment; }

    virtual void reset() { }
    virtual void resetDefaultOnly() { }

    virtual void parse(const YAML::Node &node) { }
    virtual void emit(YAML::Emitter &emitter) { }

  protected:

    std::string key_;
    std::string comment_;
  };

  template <class T>
  class Param : public ParamBase
  {
  public:

    Param(std::string key, T default_value) : ParamBase(key)
    {
      bind_value_ = nullptr;
      default_value_ = default_value;
    }

    virtual ~Param() { }

    Param<T> *setBindValue(T *bind_value)
    {
      bind_value_ = bind_value;
      if (bind_value_ != nullptr)
        *bind_value_ = default_value_;

      return this;
    }

    T *getBindValue() { return bind_value_; }

    T getValue() { return ((bind_value_ != nullptr) ? (*bind_value_) : default_value_); }
    T getDefaultValue() { return default_value_; }

    void reset()
    {
      if (bind_value_ != nullptr)
        *bind_value_ = default_value_;
    }

    void emit(YAML::Emitter &emitter)
    {
      emitter << YAML::Key << getKey();
      emitter << YAML::Value << getValue();

      if (comment_.size() > 0)
        emitter << YAML::Comment(getComment());
      else if (bind_value_ == nullptr)
        emitter << YAML::Comment("Unused Parameter, please remove if not used");
    }

  private:

    T *bind_value_;
    T default_value_;
  };

  class Section
  {
  public:

    Section(std::string name);
    virtual ~Section();

    std::string getName() { return name_; }

    template <class T>
    Param<T> *addParam(std::string key, T default_value)
    {
      if (param_map_.find(key) != param_map_.end())
        removeParam(key);

      Param<T> *param = new Param<T>(key, default_value);
      param_list_.push_back(param);
      param_map_.emplace(key, param);

      return param;
    }

    void removeParam(std::string key);

    template <class T>
    Param<T> *getParam(std::string key)
    {
      if (param_map_.find(key) == param_map_.end())
        return nullptr;

      return (Param<T> *)param_map_[key];
    }

    ParamBase *getParamBase(std::string key);

    void reset();

    void parse(const YAML::Node& node);
    void emit(YAML::Emitter &emitter);

  private:

    std::string name_;
    std::list<ParamBase *> param_list_;
    std::map<std::string, ParamBase *> param_map_;
  };

  Config();
  virtual ~Config();

  Section *addSection(std::string name);
  void removeSection(std::string name);

  Section *getSection(std::string name);

  void reset();

  bool load(std::string path);
  bool save(std::string path);

  bool sync(std::string path);

  void parse(const YAML::Node &node);
  void emit(YAML::Emitter &emitter);

private:

  std::list<Section *> section_list_;
  std::map<std::string, Section*> section_map_;
};

#endif