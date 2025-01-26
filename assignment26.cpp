#include<iostream>
#include<cstring>
using namespace std;
namespace assign26
{
    class Complex
    {
        private:
            int a,b;
        public:
            void setData(int x,int y) { a=x; b=y; }
            void showData() { cout<<"real="<<a<<" imag="<<b; }
            Complex add(Complex A) { A.a=a+A.a; A.b=b+A.b; return A; }
    };
    class Time
    {
        private:
            int h,m,s;
        public:
            void setTime(int a,int b,int c) { h=a; m=b; s=c; }
            void showTime() { cout<<endl<<"Time is "<<h<<":"<<m<<":"<<s; }
            void normalize() //normalized in 12 hour format
            { 
                if(s>=60) { s=s-60; m++; }
                if(m>=60) { m=m-60; h++; }
                if(h>=12) { h=h-12; }
            }
            Time add(Time A)
            {
                A.s=s+A.s;
                if(A.s>=60) { A.s=A.s-60; A.m++; }
                A.m=m+A.m;
                if(A.m>=60) { A.m=A.m-60; A.h++; }
                A.h=h+A.h;
                return A;
            }
    };
    class Cube
    {
        private:
            int side;
        public:
            Cube(int a) { side=a; }
            void volume() { cout<<endl<<"Volume of the cube is "<<side*side*side; }
    };
    class Date
    {
        private:
            int dd,mm,yy;
        public:
            Date(int a,int b,int c) { dd=a; mm=b; yy=c; }
            void display() { cout<<endl<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<" (format is dd/mm/yy or yyyy)"; }
    };
    class Student
    {
        private:
            char sName[30];
            int sRollNum,sClass,sAge;
        public:
            Student(char a[],int b,int c,int d) { strcpy(sName,a); sRollNum=b; sAge=c; sClass=d; }
            void display() { cout<<endl<<"Name of student is "<<sName<<", age is "<<sAge<<", roll number is "<<sRollNum<<" and class is "<<sClass; }
    };
};
int main()
{
    cout<<endl<<endl<<"\e[1mQuestion1. Define a class Complex to represent a complex number with instance variables a \
and"<<endl<<"b to store real and imaginary parts. Also define following member functions"<<endl<<"a. void setData(int,int)" \
<<endl<<"b. void showData()"<<endl<<"c. Complex add(Complex).\e[m";

    cout<<endl<<endl<<"\e[1mQuestion2. Define a class Time to represent a time with instance variables h,m and s to store \
\nhour, minute and second. Also define following member functions \
\na. void setTime(int,int,int) \
\nb. void showTime() \
\nc. void normalize() \
\nd. Time add(Time)\e[m";
    assign26::Time t1,t2,t3;
    t1.setTime(5,18,16);
    t2.setTime(2,35,18);
    t1.showTime();
    t2.showTime();
    t1.normalize();
    t2.normalize();
    t3=t1.add(t2);
    t3.showTime();

    cout<<endl<<endl<<"\e[1mQuestion3. Define a class Cube and calculate Volume of Cube and initialise it using constructor..\e[m";
    assign26::Cube c1(4);
    c1.volume();

    // cout<<endl<<endl<<"\e[1mQuestion4. Define a class Counter and Write a program to Show Counter using Constructor..\e[m";
    cout<<endl<<endl<<"\e[1mQuestion5. Define a class Date and write a program to Display Dateand initialise date object using Constructors..\e[m";
    assign26::Date d1(13,12,2024);
    d1.display();

    cout<<endl<<endl<<"\e[1mQuestion6. Define a class student and write a program to enter student details using constructor and define member function to display all the details..\e[m";
    assign26::Student s1("Gurpreet",13,12,9);
    s1.display();

    cout<<endl<<endl<<"\e[1mQuestion7. Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box..\e[m";
    cout<<endl<<endl<<"\e[1mQuestion8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it.Initialise all details using constructor..\e[m";

    return 0;
}