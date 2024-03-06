#include "common/cli.h"
#include "common/binary.h"

#include <sstream>
#include <iostream>
#include <iomanip>

void cli::clear() { std::cout << "\033[2J\033[2H" << std::endl; }
void cli::endLine() { std::cout << std::endl; }

void cli::printLine()
{
  std::cout << fgWhite() << "================================================================" << std::endl;
}

void cli::print(std::string value)
{
  std::cout << value << std::endl;
}

void cli::printError(std::string value)
{
  std::cout << fgRed() << value << std::endl;
}

void cli::printBlock(std::string value)
{
  std::cout << fgWhite() << "[ ";
  std::cout << fgBlue() << bin::uppercased(value);
  std::cout << fgWhite() << " ]" << std::endl;
}

void cli::printParameter(std::string key, std::string value)
{
  std::cout << key << ": " << fgYellow() << value << reset() << std::endl;
}

void cli::printParameter(std::string key, bool value)
{
  std::stringstream ss;
  ss << std::boolalpha << value << std::noboolalpha;
  printParameter(key, ss.str());
}

void cli::printParameter(std::string key, int value)
{
  std::stringstream ss;
  ss << value;
  printParameter(key, ss.str());
}

void cli::printParameter(std::string key, float value)
{
  std::stringstream ss;
  ss << std::fixed << std::setprecision(2);
  ss << value << std::setprecision(6) << std::defaultfloat;
  printParameter(key, ss.str());
}

void cli::printParameterBlock(std::string key, std::string value)
{
  std::cout << fgWhite() << "[ ";
  std::cout << fgBlue() << bin::uppercased(key);
  std::cout << fgWhite() << " ";
  std::cout << fgYellow() << value;
  std::cout << fgWhite() << " ] " << reset();
}

void cli::printParameterBlock(std::string key, bool value)
{
  std::stringstream ss;
  ss << std::boolalpha << value << std::noboolalpha;
  printParameterBlock(key, ss.str());
}

void cli::printParameterBlock(std::string key, int value)
{
  std::stringstream ss;
  ss << value;
  printParameterBlock(key, ss.str());
}

void cli::printParameterBlock(std::string key, float value)
{
  std::stringstream ss;
  ss << std::fixed << std::setprecision(2);
  ss << value << std::setprecision(6) << std::defaultfloat;
  printParameterBlock(key, ss.str());
}

std::string cli::reset() { return "\033[0m"; }

std::string cli::fgWhite() { return "\033[37m"; }
std::string cli::fgBlack() { return "\033[30m"; }
std::string cli::fgRed() { return "\033[31m"; }
std::string cli::fgGreen() { return "\033[32m"; }
std::string cli::fgYellow() { return "\033[33m"; }
std::string cli::fgBlue() { return "\033[34m"; }
std::string cli::fgMagenta() { return "\033[35m"; }
std::string cli::fgCyan() { return "\033[36m"; }