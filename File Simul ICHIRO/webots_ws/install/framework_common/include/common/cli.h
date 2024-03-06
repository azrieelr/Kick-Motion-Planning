#ifndef CLI_H_
#define CLI_H_

#include <string>

namespace cli
{
  void clear();
  void endLine();

  void printLine();

  void print(std::string value);
  void printError(std::string value);
  void printBlock(std::string value);

  void printParameter(std::string key, std::string value);
  void printParameter(std::string key, bool value);
  void printParameter(std::string key, int value);
  void printParameter(std::string key, float value);

  void printParameterBlock(std::string key, std::string value);
  void printParameterBlock(std::string key, bool value);
  void printParameterBlock(std::string key, int value);
  void printParameterBlock(std::string key, float value);

  std::string reset();

  std::string fgWhite();
  std::string fgBlack();
  std::string fgRed();
  std::string fgGreen();
  std::string fgYellow();
  std::string fgBlue();
  std::string fgMagenta();
  std::string fgCyan();
}

#endif
