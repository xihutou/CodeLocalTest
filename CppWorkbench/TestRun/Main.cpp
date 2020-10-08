
#include <iostream>
#include "windows.h"

int main(void)
{
    int numToTest;
    numToTest = 10;
    OutputDebugStringA("hello");
    // TRACE(numToTest);
    std::cout << "numToTest is " << numToTest << std::endl;
    return 0;
}