#include "Test.h"

TestClass::TestClass()
{

}


TestClass::~TestClass()
{

}


void TestClass::tstCallConstFunc()
{
    std::cout << (const)(tb)[0] << std::endl;
}


void TestClass::tstCallNonConstFunc()
{
    std::cout << (const_cast)(tb)[]
}