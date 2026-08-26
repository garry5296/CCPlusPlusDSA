#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
    char *p=NULL;
    int rc=fork();
    execl("/bin/ls","ls","-l",NULL);
    execlp("ls","-l",NULL);
    // execle("/bin/ls","ls",NULL,p);
    return 0;
}