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
        printf("Socket creation failed\n");
        return 1;
    }

    printf("Socket created successfully\n");
    

    struct sockaddr_in server_addr = {0};

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

    struct sockaddr_in client_addr = {0};
    
    int addr_len = sizeof(client_addr);
    SOCKET clientfd;
    if ((clientfd = accept(sockfd, (struct sockaddr*)&client_addr, &addr_len)) == INVALID_SOCKET)
    {
        
        return 1;
    }

    char *arr[] = {"Joseph", "Michael"};
    printf("Client connected successfully\n");
    
    // sending data to the client
    char buffer[1024] = {0};
    int bytes_recv = recv(clientfd, buffer, sizeof(buffer) - 1, 0);
    printf("%d\n", bytes_recv);

    if (bytes_recv > 0)
    {
        buffer[bytes_recv] = '\0';
        
        printf("Client is saying: %s\n", buffer);
    } else if (bytes_recv == 0)
    {
        printf("Client disconnected: %d\n", WSAGetLastError());
    }
    
    closesocket(sockfd); 
    WSACleanup();
    return 0;
}