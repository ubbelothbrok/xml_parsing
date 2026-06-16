#pragma once

#include <iostream>
#include <string>

enum log_level_t { ERROR, WARN, INFO };

void print(log_level_t level, std::string msg);
