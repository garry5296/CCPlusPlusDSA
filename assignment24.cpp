#include<iostream>
#define DIGIT (a%10)
#define NEWNUM (a/10)
#define MUL while(b){mul*=a;b--;}
void checkPrime(int);
int highDigit(int);
int power(int,int);
int fiboNumber(int);
void dataSwap(int&,int&);
int sum(int,int,int=0);
using namespace std;
int main()
{
    // printf("\e[1mQuestion1. Define a function to check whether a given number is a Prime number or not..\e[m");
    // int a1,i=2;char flag='f';
    // cout<<endl<<"Enter number:";
    // cin>>a1;
    // checkPrime(a1);

    // printf("\n\n\e[1mQuestion2. Define a function to find the highest value digit in a given number..\e[m");
    // int b1;
    // cout<<endl<<"Enter a number: ";
    // cin>>b1;
    // cout<<"The highest value of digit in the number is "<<highDigit(b1);

    // printf("\n\n\e[1mQuestion3. Define a function to calculate x raised to the power y..\e[m");
    // int c1,c2;
    // cout<<endl<<"Enter a number and it's power: ";
    // cin>>c1>>c2;
    // cout<<c1<<" raised to the power "<<c2<<" is "<<power(c1,c2);

    // printf("\n\n\e[1mQuestion4. Define a function to print Pascal Triangle up to N lines..\e[m");


    // printf("\n\n\e[1mQuestion5. Define a function to check whether a given number is a term in a Fibonacci series or not..\e[m");
    // int e1;
    // cout<<endl<<"Enter a number: ";
    // cin>>e1;
    // if(fiboNumber(e1))
    //     cout<<e1<<" is present in a Fibonacci series..";
    // else
    //     cout<<e1<<" is not present in a Fibonacci series..";


    // printf("\n\n\e[1mQuestion6. Define a function to swap data of two int variables using call by reference.\e[m");
    // int f1,f2;
    // cout<<endl<<"Enter two numbers: ";
    // cin>>f1>>f2;
    // dataSwap(f1,f2);
    // cout<<"Numbers after swaping are "<<f1<<" and "<<f2<<" respectively";

    printf("\n\n\e[1mQuestion7. Write a function using the default argument that is able to add 2 or 3 numbers..\e[m");
    int g1,g2,g3,g4;
    askAgain:
    cout<<endl<<"Do you want to perform the sum of 2 numbers or 3 numbers: ";
    cin>>g1;
    if(g1==2)
    {
        cout<<"Enter "<<g1<<" numbers";
        cin>>g2>>g3;
        cout<<"Sum of "<<g1<<" numbers is "<<sum(g2,g3,g4);
    }
    if(g1==3)
    {
        cout<<"Enter "<<g1<<" numbers";
        cin>>g2>>g3>>g4;
        cout<<"Sum of "<<g1<<" numbers is "<<sum(g2,g3,g4);
    }
    else
    {
        cout<<"Invalid entry";
        goto askAgain;
    }
    // printf("\n\n\e[1mQuestion8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle..\e[m");
    // printf("\n\n\e[1mQuestion9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real..\e[m");
    // printf("\n\n\e[1mQuestion10. Write functions using function overloading to add two numbers having different data types..\e[m");
    return 0;
}
//functions
int sum(int a,int b,int c)
{
    return a+b+c;
}
void dataSwap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int fiboNumber(int a)
{
    int num1=0,num2=1,temp,flag=0;
    while(num1<=a)
    {
        temp=num2;
        num2=num2+num1;
        num1=temp;
        if(a==num1)
        {
            flag=1;
            break;
        }
    }
    return flag;
}
int power(int a,int b)
{
    int mul=1;
    MUL;
    return mul;
}
void checkPrime(int a)
{
    int i=2,flag=0;
    if(a==0 || a==1)
        flag=1;
    while(i<=a/2)
    {
        if((a%i)==0)
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
        cout<<"Number is not prime"<<endl;
    else
        cout<<"Number is prime";
}
int highDigit(int a)
{
    int i=0;
    while(DIGIT)
    {
        if(DIGIT>i)
            i=DIGIT;
        a=NEWNUM;
    }
    return i;
}