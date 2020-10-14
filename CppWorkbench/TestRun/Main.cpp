
#include <iostream>
#include "windows.h"

#include "LogModule/Log.h"

int main(void)
{
    OutputDebugStringA("Main func.");

    LogClass log;
    log.append(log.getCurrentTime());
    log.append(" ");
    log.append("This is Main func.");
    std::cout << log() << std::endl;
    return 0;
}