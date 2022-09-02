#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

typedef struct  s_all {
    bool        ping;
    int         sock;
}               t_all;