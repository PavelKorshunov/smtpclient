#include <iostream>
#include "socket.h"

void Socket::setName(const std::string & name)
{
    sockname = name;
}

void Socket::show()
{
    std::cout << "sockname: " << sockname << std::endl;
}