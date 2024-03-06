#ifndef BINARY_H
#define BINARY_H

#include <string>
#include <stdint.h>

namespace bin
{
    float int2Float(int value);
    int float2Int(float value);

    uint32_t string2Int(std::string str, unsigned int index);
    std::string int2String(uint32_t val);

    std::string uppercased(std::string str);
    std::string lowercased(std::string str);
}

#endif