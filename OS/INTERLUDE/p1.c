#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int) getpid());
    int x=100;
    int rc = fork();
    printf("Run1%d\n",getpid());
    int fat = 2;
    if (rc < 0) {
        // fork failed
        fprintf(stderr, "fork failed\n");
        exit(1);
    } else if (rc == 0) {
        // child (new process)
        printf("hello, I am child (pid:%d) and x: %d\n",(int)getpid(),x);
        x++;
        printf("after incrementing x, x is %d now\n",x);
    } else {
        // parent goes down this path (main)
        // wait(NULL);
        printf("value of x in parent(pid:%d) is %d\n",(int)getpid(),x);
        x++;
        printf("value of x after changing in parent is %d",x);
    }
    return 0;
}