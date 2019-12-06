#include "socket.h"

using namespace smtpclient;

int main()
{
    Socket sock;
    sock.setName("My first class socket");
    sock.show();

    return 0;
}