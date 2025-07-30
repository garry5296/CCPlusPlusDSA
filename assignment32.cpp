#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class FLOAT
{
    private:
        float a;
    public:
        FLOAT() {}
        FLOAT(int a) {this->a=a;}
        FLOAT operator+(FLOAT &F)
        {
            FLOAT temp;
            temp.a=a+F.a;
            return temp;
        }
        FLOAT operator*(FLOAT &F)
        {
            FLOAT temp;
            temp.a=a*F.a;
            return temp;
        }
        FLOAT operator-(FLOAT &F)
        {
            FLOAT temp;
            temp.a=a-F.a;
            return temp;
        }
        FLOAT operator/(FLOAT &F)
        {
            FLOAT temp;
            temp.a=a/F.a;
            return temp;
        }
        friend ostream& operator<<(ostream&,const FLOAT&);
};
class Rectangle
{
    private:
        int length,breadth;
    public:
        Rectangle() {length=0;breadth=0;}
        Rectangle(int a,int b) {length=a;breadth=b;}
        int area() { return length*breadth; }
};
class Animals
{
    public:
        void sound() {cout<<"Sound of Animal"<<endl;}
};
class Dogs:public Animals
{
    public:
        void sound() {cout<<"Sound of Dog"<<endl;}
};
class Addition
{
    public:
        Addition() {}
        int add(int x,int y) { return x+y; }
        float add(double x,double y) { return x+y; }
        float add(double x,int y) { return x+y; }

        int add(int x,int y,int z) { return x+y+z; }
        float add(double x,double y,double z) { return x+y+z; }

        float add(int x,double y,double z) { return x+y+z; }
        float add(int x,int y,double z) { return x+y+z; }
};
class A
{
    public:
        A() {cout<<"Default constructor of A"<<endl;}
        A(int x) { cout<<"Constructor with one argument of A"<<endl;}
        A(int x,int y) {cout<<"Constructor with  two arguments of A"<<endl;}
};
class B:public A
{
    public:
        B() {cout<<"Default constructor of B"<<endl;}
        B(int x):A(4,3) {cout<<"Constructor with one argument of B"<<endl;}
        B(int x,int y):A(4) {cout<<"Constructor with two arguments of B"<<endl;}
};
class C:public B
{
    public:
        C():B(2,3) {cout<<"Default constructor of C"<<endl;}
        C(int x):B(3) {cout<<"Constructor with one argument of C"<<endl;}
        C(int x,int y):B() {cout<<"Constructor with two arguments of C"<<endl;}
};
class Area
{
    public:
        double area(double a,double b) { return a*b; }
        double area(double a,double b,double c)
        { double s=(a+b+c)/2; return sqrt(s*(s-a)*(s-b)*(s-c)); }
        double area(double a) { return 3.14*a*a; }
};
class Player
{
    private:
        int playerNo;
        char playerName[30];
        int noOfMatches;
        int *noOfGoals;
    public:
        Player() {}
        Player(int playerNo,const char *playerName, int noOfMatches ) 
        { 
            this->playerNo=playerNo;
            strcpy(this->playerName,playerName);
            this->noOfMatches=noOfMatches;
            noOfGoals=new int[noOfMatches];
            int tempcount=0;
            for(int i=0;i<noOfMatches;++i)
            {
                cout<<"Enter no of goals for match "<<i+1<<": ";
                cin>>tempcount;
                noOfGoals[i]=tempcount;
            }
        }
        void display()
        {
            cout<<"Player No            :   "<<playerNo<<endl;
            cout<<"Player Name          :   "<<playerName<<endl;
            cout<<"Number of Matches    :   "<<noOfMatches<<endl;
            int totalgoals=0;
            for(int i=0;i<noOfMatches;++i)
            {
                totalgoals+=noOfGoals[i];
            }
            cout<<"Number of Goals    :   "<<totalgoals<<endl;

        }
};
class Eightt
{
    private:
        int x;
    public:
        Eightt() {}
        Eightt(int x) {this->x=x;}
        Eightt(Eightt &E) {
            int temp=1;
            for(int i=E.x;i>0;--i)
            {
                temp*=i;
            }
            x=temp;
        }
        void display() { cout<<"Factorial is "<<x<<endl; }
};
ostream& operator<<(ostream &O,const FLOAT &F)
{
    O<<F.a; return O;
}
int main()
{
    cout<<endl<<endl<<"1. Create a class FLOAT that contains one float data member. Overload all the four"
<<"arithmetic operators so that they can operate on the objects of FLOAT."<<endl;
    FLOAT F1=5,F2=3;
    cout<<"Addition of FLOAT is "<<F1+F2<<endl;
    cout<<"Subtraction of FLOAT is "<<F1-F2<<endl;
    cout<<"Multiplication of FLOAT is "<<F1*F2<<endl;
    cout<<"Division of FLOAT is "<<F1/F2<<endl;

    cout<<endl<<endl<<"2. Define a class Rectangle and overload area function for different types of data type."<<endl;
    Rectangle R1(3,4);
    cout<<"Area of rectangle is "<<R1.area();

    cout<<endl<<endl<<"3. Define a base class Animals having member function sound() . Define another"
<<"derived class from Animals class named Dogs. You need to override the sound"
<<"function of the base class in the derived class."<<endl;
    Dogs D1;
    D1.sound();

    cout<<endl<<endl<<"4. Define a class Addition that can add 2 or 3 numbers of different data types using"
<<"function overloading."<<endl;
    Addition A;
    cout<<"Sum of 1,2 is "<<A.add(1,2)<<endl;
    cout<<"Sum of 1.2,5,3.2 is "<<A.add(5,1.2,3.2)<<endl;
    cout<<"Sum of 1,2.2 is "<<A.add(2.2,1)<<endl;

    cout<<endl<<endl<<"5. Define a class A having multiple constructors. Define another class B derived from"
<<"class A. Create derived class constructors and show use of constructor in this single inheritance."<<endl;
    B B1,B2(3),B3(3,4);

    cout<<endl<<endl<<"6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your choice."<<endl;
    C C1,C2(3),C3(1,2);

    cout<<endl<<endl<<"7. C++ Program to illustrate the use of Constructors in single inheritance of your choice."<<endl;

    cout<<endl<<endl<<"8. Write a C++ program to find the factorial of a number using copy constructor"<<endl;
    Eightt E1(5),E2(E1);
    E2.display();

    cout<<endl<<endl<<"9. Write a C++ program to calculate the area of triangle, rectangle and circle using"
<<"constructor overloading. The program should be menu driven."<<endl;
    Area A1;int choice;
    cout<<"1. Find area of Triangle"<<endl;
    cout<<"2. Find area of Rectngle"<<endl;
    cout<<"3. Find area of Circle"<<endl;
    cout<<"4. Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            double s1,s2,s3;
            cout<<"Enter sides of triangle: "<<endl;
            cin>>s1>>s2>>s3;
            cout<<"Area of triangle is "<<A1.area(s1,s2,s3)<<endl;
            break;
        
        case 3:
            double ra;
            cout<<"Enter radius of circle: "<<endl;
            cin>>ra;
            cout<<"Area of circle is "<<A1.area(ra)<<endl;

        case 2:
            double l,b;
            cout<<"Enter length and breadth of circle: "<<endl;
            cin>>l>>b;
            cout<<"Area of rectangle is "<<A1.area(l,b)<<endl;

        default:
            break;
    }

    cout<<endl<<endl<<"10. Create a C++ class for player objects with the following attributes: player no., name,"
<<"number of matches and number of goals done in each match. The number of"
<<"matches varies for each player. Write a parameterized constructor which initializes"
<<"player no., name, number of matches and creates an array for number of goals and"
<<"number of matches dynamically."<<endl;
    // Player P1(234,"Kohli",3);
    // P1.display();

    return 0;
}