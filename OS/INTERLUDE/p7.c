#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int rc=fork();
    if(rc<0)
        printf("Fork unsuccessfull!!\n");
    else if(rc==0) //child process
    {
        close(STDOUT_FILENO);
        printf("closed stdout\n");
    }
    else
        printf("Parent\n");
    return 0;
}