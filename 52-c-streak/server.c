#include <stdio.h>
#include <winsock2.h>

int main()
{
    WSADATA wsdata;
    if (WSAStartup(MAKEWORD(2, 2), &wsdata) != 0)
    {
        printf("Window initialization failed.");
        return 1;
    }

    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server_addr = {0};
    server_addr.sin_port = htons(3000);
    server_addr.sin_family = AF_INET;

    if (sockfd == INVALID_SOCKET)
    {
        perror("Socket creation failed\n");
        return 1;
    }

    struct sockaddr_in client_addr = {0};
    int addr = sizeof(client_addr);
    if (bind(sockfd, (struct sockaddr*)&server_addr, sizeof server_addr) != 0)
    {
        perror("Binding failed\n");
        return 1;
    }

    if (listen(sockfd, SOMAXCONN) == -1)
    {
        perror("Listening failed\n");
        return 1;
    }

    accept(sockfd, (struct sockaddr*)&server_addr,  &addr);

    char buf[1024];
    int bytes_recv = recv(sockfd, buf, sizeof buf, 0);
    if (bytes_recv > 0)
    {
        buf[bytes_recv] = '\0';
        printf("%s\n", buf);

    }
    
    WSACleanup();
    closesocket(sockfd);
    return 0;
}