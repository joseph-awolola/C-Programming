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

    printf("Socket created successfully\n");
    
    struct sockaddr_in server_addr;

    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(3000);
    server_addr.sin_addr.s_addr = INADDR_ANY;

    if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof server_addr) == SOCKET_ERROR)
    {
        printf("Socket binding failed: %d\n", WSAGetLastError());

        return 1;
    }

    if (listen(sockfd, SOMAXCONN) == SOCKET_ERROR)
    {
        printf("Listen failed: %d\n", WSAGetLastError());
        closesocket(sockfd);
        WSACleanup();
        return 1;
    }
    printf("Server listening: \n");
    closesocket(sockfd);
    WSACleanup();
    return 0;
}