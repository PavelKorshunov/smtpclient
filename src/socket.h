#pragma once

#include <string>

class Socket
{
    private:
        std::string sockname;

    public:
        void setName(const std::string & name);
        void show();
};