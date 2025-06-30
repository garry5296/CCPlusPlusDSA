#include<iostream>
#include<cstring>
using namespace std;
void* operator new(size_t size)
{
    cout<<"new operator is being called for size "<<size<<endl;
    void *p=malloc(size);
    if(!p)
    {
        cout<<"Memory allocation failed!!";
        exit(1);
    }
    else
        return p;
}
void operator delete(void *a)
{
    cout<<"delete operator is called for memory release"<<endl;
    free(a);
}
class Complex{
    private:
        double real, imag;
    public:
        Complex() {}
        Complex(double real,double imag)
        {
            real=real;
            imag=imag;
        }
        void setData(double real,double imag)
        {
            this->real=real;
            this->imag=imag;
        }
        Complex operator()(int a,int b)
        {
            Complex temp;
            real=a;temp.real=a;
            imag=b;temp.imag=b;
            return temp;
        }
        Complex operator=(const Complex& C)
        {
            Complex temp;
            imag=C.imag;temp.imag=C.imag;
            real=C.real;temp.real=C.real;
            return temp;
        }
        friend istream& operator>>(istream&,Complex&);
        friend ostream& operator<<(ostream&,Complex&);
};
class Array{
    private:
        int a[100];
    public:
        Array(int b,int c)
        {
            a[c]=b;
        }
        int operator[](int b)
        {
            if(b>100)
            {
                cout<<"Out of bound";
                return -1;
            }
            return a[b];
        }
};
class Distance{
    private:
        int feet;
        int inches;
    public:
        Distance() {}
        Distance(int a,int b) {feet=a;inches=b;}
        Distance operator()(int a,int b,int c)
        {
            Distance D;
            feet=a+c+5;inches=a+b+15;
            D.feet=feet;D.inches=inches;
            return D;
        }
        friend ostream& operator<<(ostream&,const Distance&);

};
class Integer{
    private:
        int x;
    public:
        Integer(){x=0;}
        Integer(int a)
        {
            x=a;
        }
        operator int()
        {
            return x;
        }
        operator float()
        {
            return x/1.0000;
        }
        bool operator!()
        {
            return !x;
        }
        friend ostream& operator<<(ostream&,const Integer&);
};
class Coordinate{
    private:
        int x,y,z;
    public:
        Coordinate(){x=0;y=0;z=0;}
        Coordinate(int a,int b,int c){x=a;y=b;z=c;}
        // Coordinate operator=(const Coordinate &A)
        // {
        //     x=A.x;y=A.y;z=A.z;
        // }
		Coordinate operator,(const Coordinate &C1)
		{
			return C1;
		}
		friend ostream& operator<<(ostream&,Coordinate&);
};
class Marks{
    private:
        int marks;
    public:
        Marks() {marks=0;}
        void display() { cout<<marks; }
        Marks* operator->()
        {
            return this;
        }
};
class Student{
    private:
        int rollno;
        char name[30];
        int clas;
    public:
        void input(int a,const char b[],int c)
        {
            rollno=a;strcpy(name,b);clas=c;
        }
        void display()
        {
            cout<<"rollno="<<rollno<<", name="<<name<<", class="<<clas<<endl;
        }
        static void* operator new(size_t size)
        {
            void *S=NULL;
            S=malloc(size);
            if(S)
            {
                cout<<"Memory allocation successful!!"<<endl;
                return S;
            }
            else
            {
                cout<<"Memory allocation failed!!"<<endl;
                return NULL;
            }
        }
        static void operator delete(void *p)
        {
            free(p);
            cout<<"Memory deallocated successfully!!"<<endl;
            p=NULL;
        }
};
class student{
    private:
        int rollno;
        char name[30];
        int clas;
    public:
        void input(int a,const char b[],int c)
        {
            rollno=a;strcpy(name,b);clas=c;
        }
        void display()
        {
            cout<<"rollno="<<rollno<<", name="<<name<<", class="<<clas<<endl;
        }
};
// void* student::operator new(size_t);
// void student::operator delete(void*);
ostream& operator<<(ostream &O,Coordinate &C)
{
	O<<"coordinates are "<<C.x<<","<<C.y<<","<<C.z<<".";
	return O;
}
ostream& operator<<(ostream &O,const Integer &I)
{
    O<<I.x;
    return O;
}
ostream& operator<<(ostream &O,const Distance &D)
{
    O<<"feet="<<D.feet<<",inches="<<D.inches;
    return O;
}
istream& operator>>(istream &A,Complex &B)
{
    cout<<endl<<"Enter real part: ";
    A>>B.real;
    cout<<"Enter imaginary part: ";
    A>>B.imag;
    return A;
}
ostream& operator<<(ostream &A,Complex &B)
{
    A<<"Value of real is "<<B.real<<" and imaginary is "<<B.imag;
    return A;
}

int main()
{
    cout<<endl<<endl<<"1. Define a class Complex with appropriate instance variables and member functions."
<<endl<<"Overload following operators"
<<endl<<"a. << insertion operator"
<<endl<<"b. >> extraction operator";
    Complex C1,C3,c4,C5;
    cin>>C1;
    cout<<C1;

    cout<<endl<<endl<<"6. Create a complex class and overload assignment operator for that class.";
    C5=C3=C1;
    c4(5,7);
    cout<<"c4 is "<<c4<<endl;
    cout<<"c3 is "<<C3<<endl;
    cout<<"c5 is "<<C5<<endl;

    cout<<endl<<"2. Define a class Complex with appropriate instance variables and member functions."
<<endl<<"One of the functions should be setData() to set the properties of the object. Make"
<<endl<<"sure the names of formal arguments are the same as names of instance variables.";
    Complex C2;
    C2.setData(2,4);
    cout<<endl<<"value of C2 is "<<C2;

    cout<<endl<<"3. Overload subscript operator [] that will be useful when we want to check for an index out of bound.";
    Array A1(110,10);
    cout<<A1[101]<<endl;
    cout<<A1[10]<<endl;

    cout<<endl<<endl<<"4. Create a student class and overload new and delete operators as a member function of the class.";
    Student *S1;
    cout<<endl;
    S1 = new Student;
    S1->input(2,"Bru",5);
    S1->display();
    delete S1;

    cout<<endl<<endl<<"5. Create a student class and overload new and delete operators outside the class."<<endl;
    student *S2;
    S2=new student;
    S2->input(2,"New",5);
    S2->display();
    delete S2;

    cout<<endl<<endl<<"7. Create an Integer class and overload logical not operator for that class.";
    Integer I1(55),I2;
    cout<<endl<<endl<<"BOOL of I1 is "<<!I1;
    cout<<endl<<endl<<"BOOL of I2 is "<<!I2;

    cout<<endl<<endl<<"8. Create a Coordinate class for 3 variables x,y and z and overload comma operator"
<<endl<<"such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and"
<<endl<<"c3 are objects of 3D coordinate class.";
    Coordinate Co1(3,6,2),Co2,Co3=(Co2,Co1),Co5(2,1,8),Co4;
    cout<<endl<<"Cordinates of Co1 are "<<Co1;
    Co2=Co1;
    cout<<endl<<"Cordinates of Co2 are "<<Co2;
    Co3=(Co1,Co2);
    Co4=(Co1,Co2,Co5);
    cout<<endl<<"Cordinates of Co3 are "<<Co3;
    cout<<endl<<"Cordinates of Co4 are "<<Co4;


    cout<<endl<<endl<<"9. Create an Integer class that contains int x as an instance variable and overload"
<<endl<<"casting int() operator that will type cast your Integer class object to int data type.";
    Integer I3=5,I4=10;int x;
    // x=int(I3);
    cout<<endl<<endl<<"I3 is now int "<<int(I3);
    cout<<endl<<endl<<"I4 is now float "<<float(I4);

    cout<<endl<<endl<<"10. Create a Distance class having 2 instance variable feet and inches. Also create"
<<endl<<"default constructor and parameterized constructor takes 2 variables . Now overload ()"
<<endl<<"function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and"
<<endl<<"inches = a+b + 15.";
    Distance D1(2,3),D2;
    D2(1,2,3);
    cout<<endl;
    cout<<"D1 is "<<D1<<endl;
    cout<<"D2 is "<<D2;


cout<<endl<<endl<<"11. Create a class Marks that have one member variable marks and one member"
<<endl<<"function that will print marks. We know that we can access member functions using"
<<endl<<"(.) dot operator. Now you need to overload (->) arrow operator to access that"
<<endl<<"function.";
    Marks M1;
    M1->display();
    return 0;
}
