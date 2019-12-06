#pragma once

#include <string>

namespace smtpclient
{
    class Socket
    {
        private:
            std::string sockname;

        public:
            void setName(const std::string & name);
            void show();
    };
}