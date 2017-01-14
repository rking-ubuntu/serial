#ifndef __SCREEN_OPT_
#define __SCREEN_OPT_

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>

int set_opt(int fd,int nSpeed,int nBits,char nEvent,int nStop);
int open_port(int fd,int comport);
#endif
