
#include <iostream>
#include "windows.h"

int main(void)
{
    int numToTest;
    numToTest = 10;
    OutputDebugStringA("hello");
    // TRACE(numToTest);
    std::cout << "numToTest is " << numToTest << std::endl;
    numToTest = 20;
    std::cout << "create new branch, change the num to value 20, numToTest is " << numToTest << std::endl;
    return 0;
}