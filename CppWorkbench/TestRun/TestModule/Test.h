#ifndef __TEST_H__
#define __TEST_H__
#include <iostream>
#include <string>

#include "../ClassHolder/TextBlock.h"
class TestClass
{
public:
    TestClass();
    ~TestClass();

    void tstCallConstFunc();
    void tstCallNonConstFunc();

    const TextBlock tb("Hello.");

};

#endif/*__TEST_H__*/