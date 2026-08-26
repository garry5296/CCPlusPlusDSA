#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<sys/wait.h>
int main()
{
    int rc=fork();
    wait(NULL);
    if(rc<0)
        printf("Fork unsuccessfull!!");
    else if(rc==0)
    {
        printf("hello\n");
    }
    else
    {
        printf("goodbye\n");
    }
    return 0;
}