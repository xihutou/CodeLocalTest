#include "Log.h"

LogClass::LogClass():m_logMsg("")
{
}

LogClass::~LogClass()
{

}

void LogClass::printCurrentTimeInterval()
{
    static time_t now = time(0);
    tm* ltm = localtime(&now);
    std::cout << "[" << (ltm->tm_hour) << ":" << ltm->tm_min << ":" << ltm->tm_sec << "]";
}

void LogClass::logOut()
{
    std::cout << m_logMsg.c_str() << std::endl;
}

const std::string LogClass::getCurrentTime()
{
    std::string time_str="";
    time_t now = time(0);
    tm* ltm = localtime(&now);
    // return time_str;
    return time_str.append("[")
                   .append(to_string(ltm->tm_hour))
                   .append(":").append(to_string(ltm->tm_min))
                   .append(":").append(to_string(ltm->tm_sec))
                   .append("]");
}

const std::string& LogClass::operator()(std::string newMsg)
{
    m_logMsg = newMsg;
    return m_logMsg;
}

const std::string& LogClass::append(const std::string appendMsg)
{
    m_logMsg.append(appendMsg);
    return m_logMsg;
}

const std::string& LogClass::operator()() const
{
    return m_logMsg;
}