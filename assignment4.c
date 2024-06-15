#include<stdio.h>
int main()
{
    printf("\n\n\e[1mQuestion1. Write a program to print MySirG 5 times on the screen.\n\e[m");
    for(int i=0;i<5;i++)
    {
        printf("MySirG\n");
    }

    printf("\n\e[1mQuestion2. Write a program to print the first 10 natural numbers.\n\e[m");
    for(int b=1;b<11;b++)
    {
        printf("%d ",b);
    }

    printf("\n\n\e[1mQuestion3. Write a program to print the first 10 natural numbers in reverse order.\n\e[m");
    int nat_num=10;
    for(int c=0;c<10;c++)
    {
        printf("%d ",nat_num);
        nat_num-=1;
    }

    printf("\n\n\e[1mQuestion4. Write a program to print the first 10 odd natural numbers.\n\e[m");
    int odd_num1=1;
    for(int d=0;d<10;d++)
    {
        printf("%d ",odd_num1);
        odd_num1+=2;
    }

    printf("\n\n\e[1mQuestion5. Write a program to print the first 10 odd natural numbers in reverse order.\n\e[m");
    int odd_num2=19;
    for(int e=0;e<10;e++)
    {
        printf("%d ",odd_num2);
        odd_num2-=2;
    }

    printf("\n\n\e[1mQuestion6. Write a program to print the first 10 even natural numbers.\n\e[m");
    int eve_num=0;
    for(int f=0;f<10;f++)
    {
        printf("%d ",eve_num);
        eve_num+=2;
    }

    printf("\n\n\e[1mQuestion7. Write a program to print the first 10 even natural numbers in reverse order.\n\e[m");
    int eve_num1=20;
    for(int f=0;f<10;f++)
    {
        printf("%d ",eve_num1);
        eve_num1-=2;
    }

    printf("\n\n\e[1mQuestion8. Write a program to print squares of the first 10 natural numbers.\n\e[m");
    for(int g=1;g<=10;g++)
    {
        printf("%d ",g*g);
    }

    printf("\n\n\e[1mQuestion9. Write a program to print cubes of the first 10 natural numbers.\n\e[m");
    for(int h=1;h<=10;h++)
    {
        printf("%d ",h*h*h);
    }

    printf("\n\n\e[1mQuestion10. Write a program to print a table of 5.\n\e[m");
    for(int j=1;j<=20;j++)
    {
        printf("5 X %d = %d\n",j,5*j);
    }
}
