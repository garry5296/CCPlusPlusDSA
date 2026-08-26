#include<iostream>
#include<cstring>
#include<unistd.h>
#include<arpa/inet.h>
#define PORT 8080
using namespace std;
int main()
{
    int sockfd;
    sockaddr_in addr;
    socklen_t addrlen = sizeof(addr);
    
    //socket creation
    sockfd=socket(AF_INET,SOCK_STREAM,0);
    cout<<sockfd<<endl;

    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY; // listen on any interface
    addr.sin_port = htons(PORT);

    //socket binding
    cout<<bind(sockfd,(sockaddr*)&addr,addrlen)<<endl;

    //socket listening
    cout<<listen(sockfd,3)<<endl;

    //socket accepting
    cout<<accept(sockfd,(sockaddr*)&addr,(socklen_t *)&addrlen);

    
    return 0;
}