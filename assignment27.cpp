#include<iostream>
#include<string>
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
            // Complex operator+(Complex A) { Complex temp; temp.real=real+A.real; temp.imag=imag+A.imag; return temp; }
            Complex operator-(Complex A) { Complex temp; temp.real=real-A.real; temp.imag=imag-A.imag; return temp; }
            Complex operator*(Complex A) { Complex temp; temp.real=real*A.real; temp.imag=imag*A.imag; return temp; }
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
            friend Complex operator+(Complex &A,Complex &B);
    };
    class Time
    {
        private:
            int hours,minutes,seconds;
        public:
            friend void operator>>(istream &B,Time &A);
            friend ostream& operator<<(ostream &B,Time A);
            bool operator==(Time A)
            {
                if(hours==A.hours &&
                minutes==A.minutes &&
                seconds==A.seconds)
                    return true;
                else
                    return false;
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
            friend ostream& operator<<(ostream&,Numbers&);
    };
    class fraction
    {
        private:
            long numerator;
            long denomerator;
        public:
            fraction(long n=0,long d=0) {  };
            // fraction() {};
            void display()
            {
                cout<<numerator<<"/"<<denomerator<<endl;
            }
            fraction& operator++() { fraction f; f.numerator=++numerator; f.denomerator=++denomerator; return f;}
            fraction& operator++(int dummy) { fraction f; f.numerator=numerator++; f.denomerator=denomerator++; return f; }
            friend void operator>>(istream&,fraction&);
            friend ostream& operator<<(ostream&,fraction&);
    };
// };
ostream& operator<<(ostream &B,Numbers &N)
{
    B<<"Negative of data is "<<N.x<<","<<N.y<<","<<N.z<<endl;
    return B;
}
void operator>>(istream &A,fraction &F)
{
    cout<<"Numerator   :   ";
    A>>F.numerator;
    cout<<endl<<endl;
    cout<<"Denomerator    :   ";
    A>>F.denomerator;
    cout<<endl<<endl;
}
ostream& operator<<(ostream &B,fraction &F)
{
    B<<F.numerator<<"/"<<F.denomerator;
    return B;
}
Complex operator+(Complex &A,Complex &B)
{
    Complex temp;
    temp.real=A.real+B.real;
    temp.imag=A.imag+B.imag;
    return temp;
}
void operator>>(istream &B,Time &A)
{
    hour:
    cout<<"Enter Hours   :  ";
    B>>A.hours;
    if(A.hours>24)
    {
        cout<<"Invalid hours!!"<<endl;
        goto hour;
    }
    minute:
    cout<<endl<<"Enter Minutes :  ";
    B>>A.minutes;
    if(A.minutes>60)
    {
        cout<<"Invalid minutes!!"<<endl;
        goto minute;
    }
    second:
    cout<<endl<<"Enter Seconds :  ";
    B>>A.seconds;
    if(A.seconds>60)
    {
        cout<<"Invalid seconds!!"<<endl;
        goto second;
    }
    cout<<endl;
}
ostream& operator<<(ostream &B,Time A)
{
    B<<"Hours    : "<<A.hours<<endl;
    B<<"Minutes  : "<<A.minutes<<endl;
    B<<"Seconds  : "<<A.seconds<<endl<<endl;
    return B;
}
int main()
{
//     cout<<endl<<"\e[1m1. Define a class Complex with appropriate instance variables and member functions."<<endl<<"Define following operators in the class: \
// \na. +"<<endl<<"b. -"<<endl<<"c. *"<<endl<<"d. ==\e[m";
//     Complex c1(3,4),c2(4,6),c3,c4,c5,c6(3,4);
//     // c3=c1+c2;
//     c4=c1-c2;
//     c5=c1*c2;
//     c3.display();
//     c4.display();
//     c5.display();
//     if(c1==c2)
//         cout<<endl<<"Status of object is same!!";
//     else
//         cout<<endl<<"Status of object is different!!";
//     if(c1==c6)
//         cout<<endl<<"Status of object is same!!";
//     else
//         cout<<endl<<"Status of object is different!!";

//     cout<<endl<<endl<<"\e[1m2. Write a C++ program to overload unary operators that is increment and decrement.\e[m";
//     ++c1;
//     c1++;
//     --c2;
//     c2--;
//     c1.displayinc();
//     c2.displaydec();

//     cout<<endl<<endl<<"\e[1m3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.\e[m";
//     Complex c10(4,5),c11;
//     c11=c6+c10;
//     c11.display();

//     cout<<endl<<endl<<"\e[1m4. Write a C++ program using operator overloading for the following:"<<endl
// <<"1. == : To check whether two Times are the same or not."<<endl
// <<"2. >> : To accept the time."<<endl
// <<"3. << : To display the time.\e[m"<<endl;
//     Time t1,t2;
//     cout<<"Enter First Time"<<endl<<"-----------------------"<<endl;
//     cin>>t1;
//     cout<<"First Time"<<endl;
//     cout<<t1;
//     cout<<"Enter Second Time"<<endl<<"-----------------------"<<endl;
//     cin>>t2;
//     cout<<"Second Time"<<endl;
//     cout<<t2;
//     if(t1==t2)
//         cout<<"Times are same!!";
//     else
//         cout<<"Times are different!!";

//     cout<<endl<<endl<<"\e[1m5. Overload the operator unary minus (-) to negate the numbers.\e[m";
//     Numbers n1(-3,4,-6);
//     n1=-n1;
//     cout<<endl;
//     cout<<n1;

    // cout<<endl<<endl<<"\e[1m6. Create a class CString to represent a string.";
    // CString cs1(" Gurpreet"),cs2(" Singh"),cs3;
    // cs3=cs1+cs2;
    // cs3.display();

    cout<<endl<<endl<<"\e[1m7. Overload the following operators as member or friend."<<endl
<<"a) Unary ++ (pre and post both)"<<endl<<"b) Overload as friend functions: operators << and >>.\e[m";
    fraction f1,f2;
    cout<<f1<<f2;
    cout<<endl<<endl;
    cout<<"Enter 1st Fraction Value"<<endl<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++ :   ";
    f1.display(); 
    ++f1;
    cout<<"++f1 :   ";
    f1.display();
    cout<<"Enter 2nd Fraction Value"<<endl<<endl;
    cin>>f2;
    cout<<endl<<"f2 = ++f1";
    f2=++f1;
    cout<<f1<<f2;
    cout<<endl<<"f2 = f1++";
    f2=f1++;
    cout<<f1<<f2;



    cout<<endl;
    return 0;
}




