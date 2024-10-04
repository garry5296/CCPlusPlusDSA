#include<stdio.h>
void printN(int);
void printRevN(int);
void printOdd(int);
void printRevOdd(int);
void printEven(int);
void printRevEven(int);
void printSq(int);
void decToBin(int);
void decToOct(int);

void rev(int);
int main()
{
    printf("\n\n\e[1mQuestion1. Write a recursive function to print first N natural numbers.\e[m");
    int a;
    printf("\nEnter a number:");
    scanf("%d",&a);
    printN(a);

    printf("\n\n\e[1mQuestion2. Write a recursive function to print first N natural numbers in reverse order.\e[m");
    int b;
    printf("\nEnter a number:");
    scanf("%d",&b);
    printRevN(b);

    printf("\n\n\e[1mQuestion3. Write a recursive function to print first N odd natural numbers.\e[m");
    int e;
    printf("\nEnter a number:");
    scanf("%d",&e);
    printOdd(e);


    printf("\n\n\e[1mQuestion4. Write a recursive function to print first N odd natural numbers in reverse order.\e[m");
    int g;
    printf("\nEnter a number:");
    scanf("%d",&g);
    printRevOdd(g);

    printf("\n\n\e[1mQuestion5. Write a recursive function to print first N even natural numbers.\e[m");
    int c;
    printf("\nEnter a number:");
    scanf("%d",&c);
    printEven(c);
    
    printf("\n\n\e[1mQuestion6. Write a recursive function to print first N even natural numbers in reverse order.\e[m");
    int d;
    printf("\nEnter a number:");
    scanf("%d",&d);
    printRevEven(d);
    
    printf("\n\n\e[1mQuestion7. Write a recursive function to print squares of first N natural numbers.\e[m");
    int g;
    printf("\nEnter a number:");
    scanf("%d",&g);
    printSq(g);
    
    printf("\n\n\e[1mQuestion8. Write a recursive function to print binary of a given decimal number.\e[m");
    int h;
    printf("\nEnter a number:");
    scanf("%d",&h);
    decToBin(h);

    printf("\n\n\e[1mQuestion9. Write a recursive function to print octal of a given decimal number.\e[m");
    int i;
    printf("\nEnter a number:");
    scanf("%d",&i);
    decToOct(i);


    printf("\n\n\e[1mQuestion10. Write a recursive function to print reverse of a given number.\e[m");
    int j;
    printf("\nEnter a number:");
    scanf("%d",&j);
    rev(j);

    return 0;
}
//functions
void printN(int n)
{
    if(n>0)
    {
        printN(n-1);
        printf("%d ",n);
    }
}
void printRevN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        printRevN(n-1);
    }
}
void printEven(int n)
{
    if(n>0)
    {
        printEven(n-1);
        printf("%d ",2*n);
    }
}
void printRevEven(int n)
{
    if(n>0)
    {
        printf("%d ",2*n);
        printRevEven(n-1);
    }
}
void printOdd(int n)
{
    if(n>0)
    {
        printOdd(n-1);
        printf("%d ",2*n-1);
    }
}
void printRevOdd(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        printRevOdd(n-1);
    }
}
void printSq(int n)
{
    if(n>0)
    {
        printSq(n-1);
        printf("%d ",n*n);
    }
}
void decToBin(int n)
{
    if(n>0)
    {
        decToBin(n/2);
        printf("%d",n%2);
    }
}
void decToOct(int n)
{
    if(n>7)
    {
        decToBin(n/8);
        printf("%d",n/8);
    }
}
void rev(int n)
{
    if(n>0)
    {
        printf("%d",n%10);
        rev(n/10);
    }
}