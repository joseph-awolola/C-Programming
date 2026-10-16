#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>

int main()
{
    WSADATA wsadata;
    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
    {
        printf("Window initialization failed.");
        return 1;
    }

    struct sockaddr_in server_addr = {0};

    if (InetPtonA(AF_INET, "127.0.0.1", &server_addr.sin_addr) != 1)
    {
        printf("Invalid server address\n");
        
        return 1;
    }

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof server_addr) != 0)
    {
        printf("Failed to connect: %d\n", WSAGetLastError());
        return 1;
    }

    char buf[1024];
    send(sockfd, buf, sizeof buf, 1);
    closesocket(sockfd);
    WSACleanup();
    return 0;
}