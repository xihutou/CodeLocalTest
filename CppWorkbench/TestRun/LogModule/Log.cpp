#include "Log.h"

LogClass::LogClass()
{

}

LogClass::~LogClass()
{
    
}

void LogClass::PrintCurrentTime()
{
    time_t now = time(0);
    tm* ltm = localtime(&now);
    std::cout << "[" << (ltm->tm_hour) << ":" << ltm->tm_min << ":" << ltm->tm_sec << "]";
}