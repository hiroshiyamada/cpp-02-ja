#pragma once

#include <string>

class Logger
{
public:
    Logger();
    void logMessage(const std::string msg) const;
};
