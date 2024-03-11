#include "logger.hpp"
#include <iostream>

Logger::Logger() {}

void Logger::logMessage(const std::string msg) const{
    std::cout << msg << std::endl;
}