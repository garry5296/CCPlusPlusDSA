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
        int a=wait(NULL);
        printf("I am child with pid: %d and wait is %d\n",(int)getpid(),a);
    }
    else
    {
        // int a=wait(NULL);
        printf("Value of wait is\n");
    }
    return 0;
}