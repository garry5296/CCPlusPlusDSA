#include<iostream>
#include<math.h>
#define DIGIT (a%10)
#define NEWNUM (a/10)
#define MUL while(b){mul*=a;b--;}
void checkPrime(int);
int highDigit(int);
int power(int,int);
int fiboNumber(int);
void dataSwap(int&,int&);
int sum(int,int,int=0);
float area(float);
float area(float,float);
float area(float,float,float);
float jsum(float,float);
float diff(float,float);
// float diff(float,int);
// float diff(int,float);
// int diff(int,int);
using namespace std;
int main()
{
    // cout<<"\e[1mQuestion1. Define a function to check whether a given number is a Prime number or not..\e[m";
    // int a1,i=2;char flag='f';
    // cout<<endl<<"Enter number:";
    // cin>>a1;
    // checkPrime(a1);

    // cout<<"\n\n\e[1mQuestion2. Define a function to find the highest value digit in a given number..\e[m";
    // int b1;
    // cout<<endl<<"Enter a number: ";
    // cin>>b1;
    // cout<<"The highest value of digit in the number is "<<highDigit(b1);

    // cout<<"\n\n\e[1mQuestion3. Define a function to calculate x raised to the power y..\e[m";
    // int c1,c2;
    // cout<<endl<<"Enter a number and it's power: ";
    // cin>>c1>>c2;
    // cout<<c1<<" raised to the power "<<c2<<" is "<<power(c1,c2);

    // cout<<"\n\n\e[1mQuestion4. Define a function to print Pascal Triangle up to N lines..\e[m";


    // cout<<"\n\n\e[1mQuestion5. Define a function to check whether a given number is a term in a Fibonacci series or not..\e[m";
    // int e1;
    // cout<<endl<<"Enter a number: ";
    // cin>>e1;
    // if(fiboNumber(e1))
    //     cout<<e1<<" is present in a Fibonacci series..";
    // else
    //     cout<<e1<<" is not present in a Fibonacci series..";


    // cout<<"\n\n\e[1mQuestion6. Define a function to swap data of two int variables using call by reference.\e[m";
    // int f1,f2;
    // cout<<endl<<"Enter two numbers: ";
    // cin>>f1>>f2;
    // dataSwap(f1,f2);
    // cout<<"Numbers after swaping are "<<f1<<" and "<<f2<<" respectively";

    // cout<<"\n\n\e[1mQuestion7. Write a function using the default argument that is able to add 2 or 3 numbers..\e[m";
    // int g1,g2,g3,g4;
    // askAgain:
    // cout<<endl<<"Do you want to perform the sum of 2 numbers or 3 numbers: ";
    // cin>>g1;
    // if(g1==2)
    // {
    //     cout<<"Enter "<<g1<<" numbers";
    //     cin>>g2>>g3;
    //     cout<<"Sum of "<<g1<<" numbers is "<<sum(g2,g3,g4);
    // }
    // if(g1==3)
    // {
    //     cout<<"Enter "<<g1<<" numbers";
    //     cin>>g2>>g3>>g4;
    //     cout<<"Sum of "<<g1<<" numbers is "<<sum(g2,g3,g4);
    // }
    // else
    // {
    //     cout<<"Invalid entry";
    //     goto askAgain;
    // }

    // cout<<"\n\n\e[1mQuestion8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle..\e[m";
    // float hRadius,hLength,hBreadth,hSide1,hSide2,hSide3;
    // cout<<endl<<"Enter radius: ";
    // cin>>hRadius;
    // cout<<"Area of circle is: "<<area(hRadius)<<endl;
    // cout<<endl<<"Enter length and breadth: ";
    // cin>>hLength>>hBreadth;
    // cout<<"Area of circle is: "<<area(hLength,hBreadth)<<endl;
    // cout<<endl<<"Enter three sides of triangle: ";
    // cin>>hSide1>>hSide2>>hSide3;
    // cout<<"Area of triangle is: "<<area(hSide1,hSide2,hSide3)<<endl;

    // cout<<"\n\n\e[1mQuestion9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real..\e[m";
    // int iNum1,iNum2,iNum5,iNum6;float iNum3,iNum4,iNum7,iNum8;
    // cout<<endl<<"Enter two whole numbers: ";
    // cin>>iNum1>>iNum2;
    // cout<<"Difference between both numbers is "<<diff(iNum1,iNum2);
    // cout<<endl<<"Enter two real numbers: ";
    // cin>>iNum3>>iNum4;
    // cout<<"Difference between both numbers is "<<diff(iNum3,iNum4);
    // cout<<endl<<"Enter one real and one whole number: ";
    // cin>>iNum7>>iNum5;
    // cout<<"Difference between both numbers is "<<diff(iNum7,iNum5);
    // cout<<endl<<"Enter one whole and one real number: ";
    // cin>>iNum6>>iNum8;
    // cout<<"Difference between both numbers is "<<diff(iNum6,iNum8);

    // cout"\n\n\e[1mQuestion10. Write functions using function overloading to add two numbers having different data types..\e[m";
    // float jNum1,jNum2,jNum3,jNum4; int jNum5,jNum6,jNum7,jNum8;
    // cout<<endl<<"Enter two real numbers: ";
    // cin>>jNum1>>jNum2;
    // cout<<"Sum of numbers is "<<jsum(jNum1,jNum2);
    // cout<<endl<<"Enter two whole numbers: ";
    // cin>>jNum5>>jNum6;
    // cout<<"Sum of numbers is "<<jsum(jNum5,jNum6);
    // cout<<endl<<"Enter one real and one whole number: ";
    // cin>>jNum3>>jNum7;
    // cout<<"Sum of numbers is "<<jsum(jNum3,jNum7);
    // cout<<endl<<"Enter one whole and one real number: ";
    // cin>>jNum8>>jNum4;
    // cout<<"Sum of numbers is "<<jsum(jNum8,jNum4);
    return 0;
}
//functions
int diff(int a,int b)
{
    int i=a-b;
    if(i>0)
        return i;
    else
    {
        i=-i;
        return i;
    }
}
float diff(int a,float b)
{
    float i=a-b;
    if(i>0)
        return i;
    else
    {
        i=-i;
        return i;
    }
}
float diff(float a,int b)
{
    float i=a-b;
    if(i>0)
        return i;
    else
    {
        i=-i;
        return i;
    }
}
float diff(float a,float b)
{
    float i=a-b;
    if(i>0)
        return i;
    else
    {
        i=-i;
        return i;
    }
}
float jsum(float a,float b)
{
    return a+b;
}
int jsum(int a,int b)
{
    return a+b;
}
float jsum(int a,float b)
{
    return a+b;
}
float jsum(float a,int b)
{
    return a+b;
}
float area(float r)
{
    return 3.14*r*r;
}
float area(float a,float b)
{
    return a*b;
}
float area(float a,float b,float c)
{
    if(a>0 && b>0 && c>0)
    {
        float s=(a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    else
        return 0;
}
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