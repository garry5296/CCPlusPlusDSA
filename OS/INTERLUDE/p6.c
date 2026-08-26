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
        // printf("I am child with pid: %d and wait is %d\n",(int)getpid(),a);
        printf("I am child with pid: %d\n",(int)getpid());
    }
    else //parent process
    {
        int a=waitpid(rc,NULL,0);
        printf("Value of waitpid is %d\n",a);
    }
    return 0;
}