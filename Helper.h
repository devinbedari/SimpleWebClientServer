#ifndef __HELPERCLASS__
#define __HELPERCLASS__

#include <cstring>
#include <string>
#include <cstdlib>
#include <iostream>

#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

int sendMessage(int clientSockfd, const char* msg, int len);
int receiveMessage(int sockfd, char* &result, int* messageLen, int end);
int errorStatus(char* &path, char* protocolVersion);
void getFilename(std::string& fPath);

#endif