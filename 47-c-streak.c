#include <stdio.h>
#include <winsock2.h>

int main(int argc, char *argv[])
{
    // tcp client in c
    WSADATA wsdata;
    if (WSAStartup(MAKEWORD(2, 2), &wsdata) != 0)
    {
        printf("Window initialization failed.");
        return 1;
    }

    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);
    
    if (sockfd == INVALID_SOCKET)
    {
        printf("socket");
        return 1;
    }

    printf("Socket created successfully");
    closesocket(sockfd);
    WSACleanup();
    return 0;
}