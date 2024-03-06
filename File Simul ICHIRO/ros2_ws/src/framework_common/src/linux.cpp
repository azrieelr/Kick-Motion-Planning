#include "common/linux.h"

#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

std::string linux_lib::getHostName()
{
  char hostname[32];
  if (gethostname(hostname, 32) != 0)
    return "";

  return hostname;
}

std::string linux_lib::getEnv(std::string env)
{
  return getenv(env.c_str());
}

bool linux_lib::isRoot()
{
  return (getuid() == 0);
}

bool linux_lib::isDirectoryExist(std::string path)
{
  struct stat st;
  if (stat(path.c_str(), &st) != 0)
    return false;

  return ((st.st_mode & S_IFMT) == S_IFDIR);
}

bool linux_lib::createDirectory(std::string path)
{
  bool isRoot = false;
  if(path[0] == '/')
  {
    isRoot = true;
  }

  std::replace(path.begin(), path.end(), '/', ' ');

  std::vector<std::string> directories;
  std::stringstream ss(path);
  std::string str;
  
  if(isRoot)
  {
    directories.push_back("/");
  }

  while (ss >> str)
  {
    directories.push_back(str);
  }

  ss.str("");
  ss.clear();
  for (std::vector<std::string>::iterator it = directories.begin(); it != directories.end(); it++)
  {
    ss << *it << "/";

    if (!isDirectoryExist(ss.str()))
      if (mkdir(ss.str().c_str(), S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH) != 0)
        return false;
  }

  return true;
}

bool linux_lib::isFileExist(std::string path)
{
  struct stat st;
  if (stat(path.c_str(), &st) != 0)
    return false;

  return ((st.st_mode & S_IFMT) == S_IFREG);
}

bool linux_lib::createFile(std::string path)
{
  std::size_t slash = path.find_last_of("/");
  if (slash < path.size())
  {
    std::string directory = path.substr(0, (slash == path.size()) ? 0 : slash);

    if (!isDirectoryExist(directory))
    {
      if (!createDirectory(directory))
        return false;
    }
  }

  std::ofstream output;
  output.open(path);
  if (output.is_open() == false)
    return false;

  output.close();

  return true;
}