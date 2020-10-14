#ifndef __LOG_H__
#define __LOG_H__

#include <ctime>
#include <iostream>
#include <string>

using namespace::std;


class LogClass
{
public:
    LogClass();
    ~LogClass();
    void printCurrentTimeInterval();
    void logOut();

    const std::string getCurrentTime();
    const std::string& operator()(const std::string newMsg);
    const std::string& append(std::string appendMsg);
    const std::string& operator()() const;
private:
    std::string m_logMsg;
};

#endif/*__LOG_H__*/