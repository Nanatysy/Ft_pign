#include "ft_ping.h"

t_all all;

void signalHandler(int _)
{
    all.ping = FALSE;
}

int main(int argc, char** argv)
{
    // 1. Parse hostname
    // 2. Open socket

    all.ping = TRUE;
    signal(SIGINT, signalHandler);

    while ( all.ping ) {

//        1. Set the ttl option to a value in the socket TTL value is set to limit the number of hops a packet can make.
//        2. Set the timeout of the recv function If timeout is not set, recv will wait forever, halting the loop.
//        3. Fill up the icmp packet As follows:
//            Set packet header type to ICMP_ECHO.
//            Set id to pid of process
//            Fill msg part randomly.
//            Calculate checksum and fill it in checksum field.
//        4. Send the packet
//        5. Wait for it to be received.

    }

    // TODO: dump result

    return 0;
}