/**
 * @file Utilities.h
 * @brief Provides utility functions used throughout the application.
 */

#pragma once

#include <string>
#include <vector>

/**
 * @brief Splits a string into substrings based on the specified delimiter.
 * @param str The string to split.
 * @param delimiter The character used to split the string.
 * @return A vector of substrings.
 */
std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> elements;
    std::stringstream ss(str);
    std::string item;
    while (getline(ss, item, delimiter)) {
        elements.push_back(item);
    }
    return elements;
}
