#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    WSADATA wsadata;

    if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
    {
        printf("Window initialization failed.");
        return 1;
    }
    char username[1024];
    while (true)
    {
        printf("Enter in your username: ");
        scanf("%s", username);
        if ((int)strlen(username) < 4){
            printf("Username cannot be lower than 4 characters\n");

        }    
        break;
    }
    
    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in server_addr = {0};
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = htons(3000);
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


    char message[1024];
    while (true)
    {
        printf("> ");
        fgets(message, sizeof message, stdin);

        int bytes_sent = send(sockfd, message, (int)strlen(message), 0);
    
        if (bytes_sent == SOCKET_ERROR)
        {
            printf("Message not sent: %d\n", WSAGetLastError());
        }
        else if (bytes_sent == 0) break;
    
    }


    

    closesocket(sockfd);
    WSACleanup();
    return 0;
}