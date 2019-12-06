#include <iostream>
#include "socket.h"

namespace smtpclient
{
    void Socket::setName(const std::string & name)
    {
        sockname = name;
    }

    void Socket::show()
    {
        std::cout << "sockname: " << sockname << std::endl;
    }
}