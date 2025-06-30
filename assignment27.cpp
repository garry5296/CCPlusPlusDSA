#include<iostream>
#include<cstring>
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
            Complex operator-(const Complex A) { Complex temp; temp.real=real-A.real; temp.imag=imag-A.imag; return temp; }
            Complex operator*(const Complex A) { Complex temp; temp.real=real*A.real; temp.imag=imag*A.imag; return temp; }
            bool operator==(const Complex A)
            { 
                if(real==A.real && imag==A.imag)
                    return true;
                else
                    return false;
            }
            void operator++() { ++real; ++imag; }
            void operator++(int dummy) { real++; imag++; }
            void operator--() { --real; --imag; }
            void operator--(int dummy) { real--; imag--; }
            friend ostream& operator<<(ostream&,const Complex);
            friend Complex operator+(Complex&,Complex&);
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
            fraction(long n=0,long d=0) { numerator=n; denomerator=d; };
            // fraction() {};
            void display()
            {
                cout<<numerator<<"/"<<denomerator<<endl;
            }
            fraction operator++() { fraction f; f.numerator=++numerator; f.denomerator=++denomerator; return f;}
            fraction operator++(int dummy) { fraction f; f.numerator=numerator++; f.denomerator=denomerator++; return f; }
            friend void operator>>(istream&,fraction&);
            friend ostream& operator<<(ostream&,fraction&);
    };
    class Matrix
    {
        private:
            int a[3][3];
        public:
            friend void operator>>(istream&,Matrix&);
            friend Matrix operator-(Matrix&);
            friend void operator<<(ostream&,Matrix);
            friend Matrix operator+(Matrix,Matrix);
    };
    class mystring
    {
        char str[100];
        public:
            friend mystring& operator!(mystring&);
            friend ostream& operator<<(ostream&,mystring);
            friend void operator>>(istream&,mystring&);
    };
    class CString
    {
        private:
            char *a=NULL;
        public:
            CString() {
                a=(char*)malloc(sizeof(char));
                *a='\0';
            }
            CString(const char *x)
            {
                int len=strlen(x);
                a=(char*)malloc(len+1);
                strcpy(a,x);
                a[len]='\0';
            }
            CString(CString &cs)
            {
                int len=strlen(cs.a);
                a=(char*)malloc(len);
                strcpy(a,cs.a);
            }
            CString operator+(const CString &A)
            {
                CString temp;int lenFirst=strlen(a),lenSecond=strlen(A.a);
                temp.a=(char*)realloc(temp.a,lenFirst+strlen(A.a)+1);
                strcpy(temp.a,a);
                // strcat(temp.a,');
                strcat(temp.a,A.a);
                return temp;
                // temp.a[lenFirst+lenSecond]
            }
            friend ostream& operator<<(ostream&,const CString&);
    };
// };
ostream& operator<<(ostream &A,const Complex B)
{
    A<<B.real<<","<<B.imag;
    return A;
}
// CString operator+(const CString &A)
// {
//     int b=strlen
//     for(int i=strlen(a);i<=);

// }
ostream& operator<<(ostream &O,const CString &cs)
{
    O<<cs.a;
    return O;
}
Matrix operator+(Matrix A,Matrix B)
{
    Matrix temp;
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            temp.a[i][j]=A.a[i][j]+B.a[i][j];
    return temp;
}
ostream& operator<<(ostream &B,mystring M)
{
    B<<M.str;
    return B;
}
mystring& operator!(mystring &A)
{
    for(int i=0;i<30;i++)
    {
        if(A.str[i]>=65 && A.str[i]<=90)
            A.str[i]=A.str[i]+32;
        else if(A.str[i]>=97 && A.str[i]<=122)
            A.str[i]=A.str[i]-32;
    }
    return A;
}
void operator>>(istream &B,mystring &A)
{
    B.ignore();
    B.getline(A.str,100);
}
void operator<<(ostream &B,Matrix C)
{
    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
            B<<C.a[i][j]<<"\t";
        B<<endl;
    }
    B<<endl;
}
void operator>>(istream &A, Matrix &B)
{
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            A>>B.a[i][j];
    cout<<endl;
}
Matrix operator-(Matrix &A)
{
    for(int i=0;i<3;++i)
        for(int j=0;j<3;++j)
            A.a[i][j]=-A.a[i][j];
    return A;
}
ostream& operator<<(ostream &B,Numbers &N)
{
    B<<"Negative of data is "<<N.x<<","<<N.y<<","<<N.z<<endl;
    return B;
}
void operator>>(istream &A,fraction &F)
{
    cout<<"Numerator   :   ";
    A>>F.numerator;
    cout<<endl;
    cout<<"Denomerator    :   ";
    A>>F.denomerator;
    cout<<endl;
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
    cout<<endl<<"\e[1m1. Define a class Complex with appropriate instance variables and member functions."<<endl<<"Define following operators in the class: \
\na. +"<<endl<<"b. -"<<endl<<"c. *"<<endl<<"d. ==\e[m"<<endl;
    // Complex c1(3,4),c2(4,6),c3,c4,c5,c6(3,4);
    // c3=c1+c2;
//     c4=c1-c2;
//     c5=c1*c2;
    // cout<<c3;
//     cout<<endl<<c4;
//     cout<<endl<<c5;
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
//     cout<<endl<<"After incrementing the status is "<<c1;
//     cout<<endl<<"After decrementing the status is "<<c2;

//     cout<<endl<<endl<<"\e[1m3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.\e[m";
//     Complex c10(4,5),c11;
//     c11=c6+c10;
//     cout<<endl<<"After addition the new complex number is "<<c11;

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

    cout<<endl<<endl<<"\e[1m6. Create a class CString to represent a string.";
    CString cs1("Gurpreet"),cs2(" Singh"),cs3;
    cs3=cs1+cs2;
    cout<<cs3;

//     cout<<endl<<endl<<"\e[1m7. Overload the following operators as member or friend."<<endl
// <<"a) Unary ++ (pre and post both)"<<endl<<"b) Overload as friend functions: operators << and >>.\e[m";
//     fraction f1,f2;
//     cout<<endl;
//     cout<<"f1    :   "<<f1<<endl<<"f2    :   "<<f2<<endl<<endl;
//     cout<<"Enter 1st Fraction Value"<<endl<<endl;
//     cin>>f1;
//     f1++;
//     cout<<"f1++ :   ";
//     f1.display(); 
//     ++f1;
//     cout<<"++f1 :   ";
//     f1.display();
//     cout<<endl<<"Enter 2nd Fraction Value"<<endl<<endl;
//     cin>>f2;
//     cout<<"f2 = ++f1"<<endl;
//     f2=++f1;
//     cout<<"f1    :  "<<f1<<endl<<"f2    :  "<<f2<<endl;
//     cout<<endl<<"f2 = f1++"<<endl;
//     f2=f1++;
//     cout<<"f1    :  "<<f1<<endl<<"f2    :  "<<f2;

//     cout<<endl<<endl<<"\e[1m8. Overload the - (Unary) should negate the numbers stored in the object.\e[m";
//     Matrix M4;
//     cout<<endl<<"Enter Matrix Element (3 X 3) :"<<endl<<endl;
//     cin>>M4;
//     cout<<"Matrix is :"<<endl<<endl<<M4;
//     M4=-M4;
//     cout<<"Matrix is :"<<endl<<endl<<M4;

//     cout<<"\e[1m9. Overload operator “!” to reverse the case of each alphabet in the string(Uppercase to Lowercase and vice versa).\e[m";
//     mystring ms1;
//     cout<<endl<<"Enter the string to invert the case: ";
//     cin>>ms1;
//     ms1=!ms1;
//     cout<<"The inverted string is "<<ms1;

//     cout<<endl<<endl<<"\e[1m10. Find out m3=m1+m2 (use operator overloading).\e[m";
//     Matrix M1,M2,M3;
//     cout<<endl<<"Enter matrix element (3 X 3) :"<<endl;
//     cin>>M1;
//     cout<<"Enter matrix element (3 X 3) :"<<endl;
//     cin>>M2;
//     cout<<"First Matrix :"<<endl<<endl<<M1;
//     cout<<"Second Matrix :"<<endl<<endl<<M2;
//     M3=M1+M2;
//     cout<<"Addition of Matrix :"<<endl<<endl<<M3;
    return 0;
}




