#pragma once

#include <vector>
#include <string>

namespace timlibs
{
    std::vector<std::string> split(std::string str, const std::string& separator = " ");
    std::vector<std::string> split(const std::string& str, const char& separator);
    std::vector<std::string> split(const std::string& str, const char* separator);
}