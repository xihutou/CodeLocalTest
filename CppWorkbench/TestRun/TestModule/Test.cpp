#include "Test.h"

TestClass::TestClass():m_strTag("TestClass")
{
    std::string tempStr = m_strTag;
    m_pLogObj = new LogClass(tempStr.append(":").append(" This.is TestClass.\n"));
}


TestClass::~TestClass()
{

}


void TestClass::Run()
{
    int iVal = 1024;
    int &refVal = iVal; // refVal refers to ival
    m_pLogObj->clearLog();
    m_pLogObj->append(m_strTag).append(": ").append(to_string(iVal));
    m_pLogObj->logOut();

    refVal = 5;
    m_pLogObj->clearLog();
    m_pLogObj->append(m_strTag).append(": ").append(to_string(iVal));
    m_pLogObj->logOut();
}