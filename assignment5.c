#include<stdio.h>
int main()
{
    printf("\n\n\e[1mQuestion1. Write a program to print MySirG N times on the screen.\n\e[m");
    int one5;
    printf("Enter a number:");
    scanf("%d",&one5);
    for(int i=0;i<one5;i++)
    {
        printf("MySirG\n");
    }

    printf("\n\e[1mQuestion2. Write a program to print the first N natural numbers.\n\e[m");
    int two5;
    printf("Enter a number:");
    scanf("%d",&two5);
    for(int b=1;b<=two5;b++)
    {
        printf("%d ",b);
    }

    printf("\n\n\e[1mQuestion3. Write a program to print the first N natural numbers in reverse order.\n\e[m");
    int three5,nat_num;
    printf("Enter a number:");
    scanf("%d",&three5);
    nat_num=three5;
    for(int c=0;c<three5;c++)
    {
        printf("%d ",nat_num);
        nat_num-=1;
    }

    printf("\n\n\e[1mQuestion4. Write a program to print the first N odd natural numbers.\n\e[m");
    int four5,odd_num1=1;
    printf("Enter a number:");
    scanf("%d",&four5);
    for(int d=0;d<four5;d++)
    {
        printf("%d ",odd_num1);
        odd_num1+=2;
    }

    printf("\n\n\e[1mQuestion5. Write a program to print the first N odd natural numbers in reverse order.\n\e[m");
    int five5,odd_num2;
    printf("Enter a number:");
    scanf("%d",&five5);
    odd_num2=five5*2-1;
    for(int e=0;e<five5;e++)
    {
        printf("%d ",odd_num2);
        odd_num2-=2;
    }

    printf("\n\n\e[1mQuestion6. Write a program to print the first N even natural numbers.\n\e[m");
    int six5,eve_num=2;
    printf("Enter a number:");
    scanf("%d",&six5);
    for(int f=0;f<six5;f++)
    {
        printf("%d ",eve_num);
        eve_num+=2;
    }

    printf("\n\n\e[1mQuestion7. Write a program to print the first N even natural numbers in reverse order.\n\e[m");
    int seven5,eve_num1;
    printf("Enter a number:");
    scanf("%d",&seven5);
    eve_num1=seven5*2;
    for(int f=0;f<seven5;f++)
    {
        printf("%d ",eve_num1);
        eve_num1-=2;
    }

    printf("\n\n\e[1mQuestion8. Write a program to print squares of the first N natural numbers.\n\e[m");
    int eight5;
    printf("Enter a number:");
    scanf("%d",&eight5);
    for(int g=1;g<=eight5;g++)
    {
        printf("%d ",g*g);
    }

    printf("\n\n\e[1mQuestion9. Write a program to print cubes of the first N natural numbers.\n\e[m");
    int nine5;
    printf("Enter a number:");
    scanf("%d",&nine5);
    for(int h=1;h<=nine5;h++)
    {
        printf("%d ",h*h*h);
    }

    printf("\n\n\e[1mQuestion10. Write a program to print a table of N.\n\e[m");
    int ten5;
    printf("Enter a number:");
    scanf("%d",&ten5);
    for(int j=1;j<=20;j++)
    {
        printf("%d X %d = %d\n",ten5,j,ten5*j);
    }
    return 0;
}