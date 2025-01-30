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
            void operator++() { real++; imag++; }
            void operator--() { real--; imag--; }
            void displayinc() { cout<<endl<<"After incrementing the status is "<<real<<","<<imag; }
            void displaydec() { cout<<endl<<"After decrementing the status is "<<real<<","<<imag; }
            // friend void operator+(Complex);
    };
    // class Time
    // {
    //     private:
    //         int hours,minutes,seconds;
    //     public:
    //         Time operator>>(Time A)
    //         {
    //             hour:
    //             cout<<"Enter Hours   :  ";
    //             cin>>hours;
    //             if(hours>24)
    //             {
    //                 cout<<"Invalid hours!!"
    //                 goto hour;
    //             }
    //             minute:
    //             cout<<"Enter Minutes :  ";
    //             cin>>minutes;
    //             if(minutes>60)
    //             {
    //                 cout<<"Invalid minutes!!"
    //                 goto minute;
    //             }
    //             second:
    //             cout<<"Enter Seconds :  ";
    //             cin>>seconds;
    //             if(seconds>60)
    //             {
    //                 cout<<"Invalid seconds!!"
    //                 goto second;
    //             }
    //         }
    //         Time operator==(Time A)
    //         {
    //             if(hours==A.hours &&
    //             minutes==A.minutes &&
    //             seconds==A.seconds)
    //                 cout<<"Both times are same!!";
    //             else
    //                 cout<<"Both times are not same!!";
    //         }
    //         Time operator>>(Time A)
    //         {

    //         }
    // };
    // class Complex2
    // {
    //     private:
    //         int real,imag;
    //     public:
    //         Complex2(int a,int b) { real=a;imag=b; }
    //         void operator+(Complex);
    // };
};
// void assign27::Complex2::operator+(Complex A)
// {
//     Complex temp;
//     temp.real=real+A.real;
//     temp.imag=imag+A.imag;
//     cout<<"Real is "<<temp.real<<" & imag is "<<temp.imag;
// } 
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

    cout<<endl<<endl<<"\e[1m2. Write a C++ program to overload unary operators that is increment and decrement.\e[m";
    ++c1;
    // c1++;
    --c2;
    // c2--;
    c1.displayinc();
    c2.displaydec();

    cout<<endl<<endl<<"\e[1m3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.\e[m";
    // cout<<"The sum of two objects is "<<operator+(c6,c2);
    // assign27::Complex2 c10(4,5);
    // c10+c1;

    cout<<endl<<endl<<"\e[1m4. Write a C++ program using operator overloading for the following:"<<endl
<<"1. == : To check whether two Times are the same or not."<<endl
<<"2. >> : To accept the time."<<endl
<<"3. << : To display the time.\e[m"<<endl;


    cout<<endl;
    return 0;
}