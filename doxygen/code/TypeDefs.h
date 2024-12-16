/**
 * @file TypeDefs.h
 * @brief Provides type definitions for common data structures in the application.
 */

#pragma once

#include <vector>
#include <string>
#include <map>

/**
 * @typedef std::vector<std::string> StringList
 * @brief Represents a list of strings.
 */
typedef std::vector<std::string> StringList;

/**
 * @using StringStringMap = std::map<std::string, std::string>
 * @brief Defines a map from string to string for configuration settings.
 */
using StringStringMap = std::map<std::string, std::string>;
