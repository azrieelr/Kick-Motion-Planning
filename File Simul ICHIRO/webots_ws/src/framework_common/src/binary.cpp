#include "common/binary.h"
#include <stdint.h>
#include <string.h>

float bin::int2Float(int value)
{
    float result;
    memcpy(&result, (uint32_t *)&value, sizeof(uint32_t));

    return result;
}

int bin::float2Int(float value)
{
    int result;
    memcpy((uint32_t *)&result, &value, sizeof(float));

    return result;
}

uint32_t bin::string2Int(std::string str, unsigned int index)
{
    uint32_t result = 0;
    for (unsigned int i = 0; i < 4; i++)
    {
        if (index + i < str.size())
        {
            result |= (str[index + i] << (i * 8));
        }
    }

    return result;
}

std::string bin::int2String(uint32_t val)
{
    std::string str = "";
    for (unsigned int i = 0; i < 4; i++)
    {
        str += (char)((val >> (i * 8)) & 0xFF);
    }

    return str;
}

std::string bin::uppercased(std::string str)
{
    for (char &ch : str)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = 'A' + (ch - 'a');
        }
    }

    return str;
}

std::string bin::lowercased(std::string str)
{
    for (char &ch : str)
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = 'a' + (ch - 'A');
        }
    }

    return str;
}