#include "Log.h"

LogClass::LogClass():m_strLogMsg("")
{
}

LogClass::LogClass(std::string str)
{
    m_strLogMsg = str;
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
    std::cout << m_strLogMsg.c_str() << std::endl;
}

void LogClass::clearLog()
{
    m_strLogMsg.clear();
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
    m_strLogMsg = newMsg;
    return m_strLogMsg;
}

std::string& LogClass::append(const std::string appendMsg)
{
    m_strLogMsg.append(appendMsg);
    return m_strLogMsg;
}

const std::string& LogClass::operator()() const
{
    return m_strLogMsg;
}