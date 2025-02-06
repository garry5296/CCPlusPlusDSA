#include<iostream>
#include<string.h>
using namespace std;
// namespace assign27
// {
    class Complex
    {
        private:
            int real,imag;
        public:
            Complex(int a,int b) { real=a;imag=b; }
            Complex() {}
            // Complex operator+(Complex A) { A.real=real+A.real; A.imag=imag+A.imag; return A; }
            Complex operator-(Complex A) { A.real=real-A.real; A.imag=imag-A.imag; return A; }
            Complex operator*(Complex A) { A.real=real*A.real; A.imag=imag*A.imag; return A; }
            bool operator==(Complex A)
            { 
                if(real==A.real && imag==A.imag)
                    return true;
                else
                    return false;
            }
            void display() { cout<<endl<<"Real is "<<real<<" & imag is "<<imag<<"."; }
            void operator++() { ++real; ++imag; }
            void operator++(int dummy) { real++; imag++; }
            void operator--() { --real; --imag; }
            void operator--(int dummy) { real--; imag--; }
            void displayinc() { cout<<endl<<"After incrementing the status is "<<real<<","<<imag; }
            void displaydec() { cout<<endl<<"After decrementing the status is "<<real<<","<<imag; }
            friend Complex operator+(Complex,Complex);
    };
    class Time
    {
        private:
            int hours,minutes,seconds;
        public:
            friend void operator>>(istream &B,Time A);
            friend void operator<<(ostream &B,Time A);
            void operator==(Time A)
            {
                if(hours==A.hours &&
                minutes==A.minutes &&
                seconds==A.seconds)
                    cout<<"Times are same!!";
                else
                    cout<<"Times are different!!";
            }
    };
    class Numbers
    {
        private:
            int x,y,z;
        public:
            Numbers() {}
            Numbers(int a,int b,int c)
            {
                x=a;y=b;z=c;
            }
            Numbers operator-()
            {
                Numbers temp;
                temp.x=-x;
                temp.y=-y;
                temp.z=-z;
                return temp;
            }
            void display()
            {
                cout<<endl<<"x is "<<x<<" y is "<<y<<" and z is "<<z;
            }
    };
    class CString
    {
        private:
            char a[50];
        public:
            CString() {}
            CString(char b[])
            {
                strcpy(a,b);
            }
            CString operator+(CString A)
            {
                CString temp;
                temp=strcat(a,A.a);
                return temp;
            }
            void display()
            {
                cout<<a;
            }
    };
// };
Complex operator+(Complex A,Complex B)
{
    Complex temp;
    temp.real=A.real+B.real;
    temp.imag=A.imag+B.imag;
    return temp;
}
void operator>>(istream &B,Time A)
{
    hour:
    cout<<"Enter Hours   :  ";
    B>>A.hours;
    if(A.hours>24)
    {
        cout<<"Invalid hours!!";
        goto hour;
    }
    minute:
    cout<<"Enter Minutes :  ";
    B>>A.minutes;
    if(A.minutes>60)
    {
        cout<<"Invalid minutes!!";
        goto minute;
    }
    second:
    cout<<"Enter Seconds :  ";
    B>>A.seconds;
    if(A.seconds>60)
    {
        cout<<"Invalid seconds!!";
        goto second;
    }
}
void operator<<(ostream &B,Time A)
{
    B<<"Hours    : "<<A.hours<<endl;
    B<<"Minutes  : "<<A.minutes<<endl;
    B<<"Seconds  : "<<A.seconds<<endl;
}
int main()
{
    cout<<endl<<"\e[1m1. Define a class Complex with appropriate instance variables and member functions."<<endl<<"Define following operators in the class: \
\na. +"<<endl<<"b. -"<<endl<<"c. *"<<endl<<"d. ==\e[m";
    Complex c1(3,4),c2(4,6),c3,c4,c5,c6(3,4);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c3.display();
    c4.display();
    c5.display();
    if(c1==c2)
        cout<<endl<<"Status of object is same!!";
    else
        cout<<endl<<"Status of object is different!!";
    if(c1==c6)
        cout<<endl<<"Status of object is same!!";
    else
        cout<<endl<<"Status of object is different!!";

    cout<<endl<<endl<<"\e[1m2. Write a C++ program to overload unary operators that is increment and decrement.\e[m";
    ++c1;
    c1++;
    --c2;
    c2--;
    c1.displayinc();
    c2.displaydec();

    cout<<endl<<endl<<"\e[1m3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.\e[m";
    Complex c10(4,5),c11;
    c11=c6+c10;
    c11.display();

    cout<<endl<<endl<<"\e[1m4. Write a C++ program using operator overloading for the following:"<<endl
<<"1. == : To check whether two Times are the same or not."<<endl
<<"2. >> : To accept the time."<<endl
<<"3. << : To display the time.\e[m"<<endl;
    Time t1,t2;
    cout<<"Enter First Time"<<endl<<"-----------------------"<<endl;
    cin>>t1;
    cout<<"First Time";
    cout<<t1;
    cout<<"Enter Second Time"<<endl<<"-----------------------"<<endl;
    cin>>t2;
    cout<<"Second Time";
    cout<<t2;

    cout<<endl<<endl<<"\e[1m5. Overload the operator unary minus (-) to negate the numbers.\e[m";
    Numbers n1(-3,4,-6);
    n1=-n1;
    n1.display();

    cout<<endl<<endl<<"\e[1m6. Create a class CString to represent a string.";
    CString cs1(" Gurpreet"),cs2(" Singh"),cs3;
    cs3=cs1+cs2;
    cs3.display();

    cout<<endl;
    return 0;
}




