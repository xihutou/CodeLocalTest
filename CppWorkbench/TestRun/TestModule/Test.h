#ifndef __TEST_H__
#define __TEST_H__
#include <iostream>
#include <string>

#include "../LogModule/Log.h"
class TestClass
{
public:
    TestClass();
    ~TestClass();
    void Run();

private:
    std::string m_strTag;
    LogClass* m_pLogObj;
};

#endif/*__TEST_H__*/