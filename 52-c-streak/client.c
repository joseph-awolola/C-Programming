#include <stdio.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdbool.h>


int main(int argc, char *argv[])
{
    // create a link
    WSADATA wsadata;

    if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0)
    {
        printf("Window initialization failed.");
        return 1;
    }
    SOCKET sockfd = socket(AF_INET, SOCK_STREAM, 0);

    struct sockaddr_in server_addr = {0};

    server_addr.sin_port = htons(3000);
    server_addr.sin_family = AF_INET;


    

    if (InetPtonA(AF_INET, "127.0.0.1", &server_addr.sin_addr) != 1)
    {
        perror("Invalid server address");
        
        return 1;
    }

    if (connect(sockfd, (struct sockaddr*)&server_addr, sizeof server_addr) != 0)   
    {
        perror("Error connecting to server.\n");
        return 1;
    }

    char msg[1024];
    while (true)
    {
        fgets(msg, sizeof msg, stdin);
        int bytes_sent = send(sockfd, msg, sizeof msg, 0);
        if (bytes_sent < 0)
        {
            perror("An error occured\n");
        } else printf("%s")
    
    }
    
    while (true)
    {
        int bytes_recv = recv(sockfd, msg, sizeof msg, 0);
        if (bytes_recv > 0)
        {
            msg[bytes_recv] = '\0';
        }

        printf("%s\n", msg);


    }
    WSACleanup();
    closesocket(sockfd);
    return 0;
    
}