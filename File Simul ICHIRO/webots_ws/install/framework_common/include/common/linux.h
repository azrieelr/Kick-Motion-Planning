#ifndef LINUXLIB_H_
#define LINUXLIB_H_

#include <string>

namespace linux_lib
{
  std::string getHostName();
  std::string getEnv(std::string env);
  bool isRoot();

  bool isDirectoryExist(std::string path);
  bool createDirectory(std::string path);

  bool isFileExist(std::string path);
  bool createFile(std::string path);
}

#endif