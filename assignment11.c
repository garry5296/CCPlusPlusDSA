#include<stdio.h>
int first();
int second();
int checkPrime();
int nextPrime();
void allPrime();
void betweenPrime();
void fifi();
int findSquare();
int facto();
int main()
{
    printf("\e[1mQuestion1. Write a function to calculate LCM of two numbers. (TSRS).\e[m");
    int a,b,lcm;
    printf("\nEnter two numbers:");
    scanf("%d%d",&a,&b);
    lcm=first(a,b);
    printf("lcm is %d",lcm);

    printf("\n\n\e[1mQuestion2. Write a function to calculate HCF of two numbers. (TSRS).\e[m");
    int c,d,hcf;
    printf("\nEnter two numbers:");
    scanf("%d%d",&c,&d);
    hcf=second(c,d);
    printf("HCF is %d",hcf);

    printf("\n\n\e[1mQuestion3. Write a function to check whether a given number is Prime or not. (TSRS).\e[m");
    int e,f;
    printf("\nEnter a number:");
    scanf("%d",&e);
    f=checkPrime(e);
    if(f==1)
        printf("Number is not prime");
    else
        printf("Number is prime");

    printf("\n\n\e[1mQuestion4. Write a function to find the next prime number of a given number. (TSRS).\e[m");
    int g;
    printf("\nEnter a number:");
    scanf("%d",&g);
    g=nextPrime(g);
    printf("Next Prime number is %d",g);

    printf("\n\n\e[1mQuestion5. Write a function to print first N prime numbers (TSRN).\e[m");
    int h;
    printf("\nEnter a number:");
    scanf("%d",&h);
    allPrime(h);

    printf("\n\n\e[1mQuestion6. Write a function to print all Prime numbers between two given numbers. (TSRN).\e[m");
    int pstart,pend;
    printf("\nEnter start and end position:");
    scanf("%d%d",&pstart,&pend);
    betweenPrime(pstart,pend);

    printf("\n\n\e[1mQuestion7. Write a function to print first N terms of Fibonacci series (TSRN).\e[m");
    int k;
    printf("\nEnter a number:");
    scanf("%d",&k);
    fifi(k);


    // printf("\n\n\e[1mQuestion8. Write a function to print PASCAL Triangle. (TSRN).\e[m");


    printf("\n\n\e[1mQuestion9. Write a program in C to find the square of any number using the function..\e[m");
    int sqnum;
    printf("\nEnter a number to find it's square:");
    scanf("%d",&sqnum);
    sqnum = findSquare(sqnum);
    printf("The square of number is %d",sqnum);

    printf("\n\n\e[1mQuestion10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function..\e[m");
    int fcnum=5,factsum=0;
    while(fcnum>0)
    {
        factsum += facto(fcnum)/fcnum;
        fcnum--;
    }
    printf("\nThe sum of factorial is %d",factsum);
    return 0;
}
// Functions:
int first(int x,int y)
{
    int n=1;
    for(int i=2;x!=1 || y!=1;)
    {
        if(x%i==0 && y%i==0)
        {
            x/=i;
            y/=i;
            n*=i;
        }
        else if (x%i==0)
        {
            x/=i;
            n*=i;
        }
        else if (y%i==0)
        {
            y/=i;
            n*=i;
        }else{
            i++;
        }
    }
    return n;
}
int second(int m,int n)
{
    if(n>m)
    {
        m=m+n;n=m-n;m=m-n;
    }
    while(n!=0)
    {
        m=m%n+n;n=m-n;m=m-n;
    }
    return m;
}
int checkPrime(int o)
{
    int i=2,check=0;
    while (i<=o/2)
    {
        if (o%i==0)
        {
            check=1;
            break;
        }
        i++;
    }
    return check;
}
int nextPrime(int p)
{
    int check=0;p+=1;
    while(check!=1)
    {
        int i=2;
        while (i<=p/2)
        {
            if (p%i==0)
            {
                p++;
                break;
            }
            i++;
        }
        if (i>p/2)
        {
            check=1;
        }
    }
    return p;
}
void allPrime(int n)
{
    int q=2,i,count=0;
    while (count<n)
    {
        for (i=2; i <= q/2; i++)
        {
            if (q%i==0)
            {
                q++;
                break;
            }
        }
        if (i>q/2)
        {
            printf("%d ",q);
            q++;
            count++;
        }
    }
}
void betweenPrime(int i, int j)
{
    int p;
    if(i>j)
    {
        i=i+j;j=i-j;i=i-j;
    }
    if (i==0)
        i=1;
    i+=1;
    while (i<j)
    {
        for (p = 2; p <= i/2; p++)
        {
            if (i%p==0)
            {
                i++;
                break;
            }
        }
        if (p>i/2)
        {
            printf("%d ",i);
            i++;
        }
    }
}
void fifi(int l)
{
    int num1=0,num2=1,count=2;
    if(l==1)
    {
        printf("%d ",num1);
    }
    else
    {
        printf("%d ",num1);
        printf("%d ",num2);
        while (count<l)
        {
            printf("%d ",num1+num2);
            num1=(num1+num2)+num2;
            num2=num1-num2;
            num1=num1-num2;
            count++;
        }
    }
}
int findSquare(int a)
{
    return a*a;
}
int facto(int b)
{
    int mul=1;
    while (b>0)
    {
        mul=mul*b;
        b--;
    }
    return mul;
}