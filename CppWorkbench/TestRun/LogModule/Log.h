#ifndef __LOG_H__
#define __LOG_H__

#include <ctime>
#include <iostream>

using namespace::std;

class LogClass
{
public:
    LogClass();
    ~LogClass();
    void PrintCurrentTime();//{std::cout << "LogClass::PrintCurrentTime" << std::endl;}
private:
    int m_numberor;
};

#endif/*__LOG_H__*/