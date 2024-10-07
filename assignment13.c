//Question 7,8,10 are not solved.
#include<stdio.h>
int sumNatural(int);
int sumOdd(int);
int sumSquare(int);
int sumDigit(int);
int fact(int);
int countDigit(int);
int fibbo(int);
int main()
{
    int a;
    printf("\e[1mQuestion1. Write a recursive function to calculate sum of first N natural numbers.\e[m");
    printf("\nEnter a number:");
    scanf("%d",&a);
    printf("%d",sumNatural(a));

    printf("\n\n\e[1mQuestion2. Write a recursive function to calculate sum of first N odd natural numbers.\e[m");
    int b;
    printf("\nEnter a number:");
    scanf("%d",&b);
    printf("%d",sumOdd(b));

    printf("\n\n\e[1mQuestion3. Write a recursive function to calculate sum of first N odd natural numbers.\e[m");
    int c;
    printf("\nEnter a number:");
    scanf("%d",&c);
    printf("%d",sumOdd(c));

    printf("\n\n\e[1mQuestion4. Write a recursive function to calculate sum of squares of first n natural numbers.\e[m");
    int e;
    printf("\nEnter a number:");
    scanf("%d",&e);
    printf("%d",sumSquare(e));

    printf("\n\n\e[1mQuestion5. Write a recursive function to calculate sum of digits of a given number.\e[m");
    int g;
    printf("\nEnter a number:");
    scanf("%d",&g);
    printf("%d",sumDigit(g));

    printf("\n\n\e[1mQuestion6. Write a recursive function to calculate factorial of a given number.\e[m");
    int h;
    printf("\nEnter a number:");
    scanf("%d",&h);
    printf("%d",fact(h));

    printf("\n\n\e[1mQuestion7. Write a recursive function to calculate HCF of two numbers.\e[m");
    // int i;
    // printf("\nEnter a number:");
    // scanf("%d",&i);
    // printf("%d",fact(i));


    printf("\n\n\e[1mQuestion8. Write a recursive function to print first N terms of Fibonacci series.\e[m");
    // int m;
    // printf("\nEnter a number:");
    // scanf("%d",&m);
    // fibbo(m);


    printf("\n\n\e[1mQuestion9. Write a program in C to count the digits of a given number using recursion..\e[m");
    int j;
    printf("\nEnter a number:");
    scanf("%d",&j);
    printf("%d",countDigit(j));


    printf("\n\n\e[1mQuestion10. Write a program in C to calculate the power of any number using recursion..\e[m");
    // int m;
    // printf("\nEnter a number:");
    // scanf("%d",&m);
    // printf("%d",countDigit(m));

    return 0;
}
int sumNatural(int n)
{
    if(n==0)
        return 0;
    return n+sumNatural(n-1);
}
int sumOdd(int n)
{
    if(n==0)
        return 0;
    return (2*n-1)+sumOdd(n-1);
}
int sumSquare(int n)
{
    if(n==0)
        return 0;
    return (n*n)+sumSquare(n-1);
}
int sumDigit(int n)
{
    if(n==0)
        return 0;
    return (n%10)+sumDigit(n/10);
}
int fact(int n)
{
    if(n==0)
        return 1;
    return n*fact(n-1);
}
int countDigit(int n)
{
    if(n==0)
        return 0;
    return 1+countDigit(n/10);
}
int fibbo(int n)
{
    if(n==0)
        return 0;
    printf("%d ",n+fibbo(n-1));
}