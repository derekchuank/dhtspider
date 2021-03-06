#ifndef _CORE_H_
#define _CORE_H_

#include <stdarg.h>
#include <sys/stat.h>
#include <sys/types.h>

#include <arpa/inet.h>
#include <errno.h>
#include <fcntl.h>
#include <netdb.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/epoll.h>
#include <sys/socket.h>
#include <sys/timerfd.h>
#include <time.h>
#include <unistd.h>

#include "bencode.h"

#define MAX_EVENTS 10
#define EPOLL_TIMEOUT 10 * 1000
#define FINDNODE_INTERVAL 4
#define BUF_SIZE 102400
#define NODE_SIZE 1024
#define NEIGHBOR_OFFSET 6

enum elevel { INFO_LEVEL, ERR_LEVEL };

char buf[BUF_SIZE];
int listenfd;
int dbfd;

void eprint(unsigned char *str, int num, ...);

void eprintf(const char *fmt, ...);

void eloop();

#endif
