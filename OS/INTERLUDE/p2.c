#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/wait.h>
int main()
{
    int fd=open("/home/gurpreet/Desktop/test.txt",O_RDWR|O_APPEND);
    int rc=fork();
    if(rc<0)
        printf("Fork unsuccessful!!\n");
    else if(rc==0)
    {
        write(fd,"child",5);
        printf("Value of fd in child(with pid: %d) is %d\n",(int)getpid(),fd);
    }
    else{
        write(fd,"parent",6);
        printf("Value of fd in parent(pid: %d) is %d\n",(int)getpid(),fd);
    }
    return 0;
}