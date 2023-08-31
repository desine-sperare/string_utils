#include "string_utils.hpp"
#include <vector>

namespace timlibs
{
    /// @brief Slit your string by seporator, ex. src str "Hello world!", separator " " result {"Hello", "world!"}
    /// @param str source string
    /// @param separator separator
    /// @return List of strings devided by separator
    std::vector<std::string> split(std::string str, const std::string& separator)
    {
        std::vector<std::string> value;
        while (str != "")
        {
            size_t IndexOfSeporator = str.find(separator);
            if (IndexOfSeporator != std::string::npos)
            {
                value.push_back(str.substr(0, IndexOfSeporator));
                str.erase(0, IndexOfSeporator + separator.length());
            }
        }
        value.push_back(str);
        return value;
    }

    /// @brief Slit your string by seporator, ex. src str "Hello world!", separator " " result {"Hello", "world!"}
    /// @param str source string
    /// @param separator separator
    /// @return List of strings devided by separator
    std::vector<std::string> split(const std::string& str, const char& separator)
    {
        return split(str, std::string(1, separator));
    }

    /// @brief Slit your string by seporator, ex. src str "Hello world!", separator " " result {"Hello", "world!"}
    /// @param str source string
    /// @param separator separator
    /// @return List of strings devided by separator
    std::vector<std::string> split(const std::string& str, const char* separator)
    {
        return split(str, std::string(separator));
    }
}