#include<iostream>
using namespace std;
namespace assign27
{
    class Complex
    {
        private:
            int real,imag;
        public:
            Complex(int a,int b) { real=a;imag=b; }
            Complex() {}
            Complex operator+(Complex A) { A.real=real+A.real; A.imag=imag+A.imag; return A; }
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
    };
};
int main()
{
    cout<<endl<<"\e[1m1. Define a class Complex with appropriate instance variables and member functions."<<endl<<"Define following operators in the class: \
\na. +"<<endl<<"b. -"<<endl<<"c. *"<<endl<<"d. ==\e[m";
    assign27::Complex c1(3,4),c2(4,6),c3,c4,c5,c6(3,4);
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

    cout<<endl<<"\e[1m2. Write a C++ program to overload unary operators that is increment and decrement.\e[m"

    cout<<endl;
    return 0;
}