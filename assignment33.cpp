#include<iostream>
#include<cmath>
using namespace std;
class shape
{
    private:
        double x,y;
    public:
        void get_data(double x,double y=0) { this->x=x;this->y=y; }
        double const getX() { return x;}
        double const getY() { return y;}
        virtual void display_area() {}
        virtual ~shape() {}
};
class triangle:public shape
{
    public:
        void display_area()
        {
            cout<<"Area of triangle is "<<getX()*getY()/2<<endl;
        }
};
class rectangle:public shape
{
    public:
        void display_area()
        {
            cout<<"Area of rectangle is "<<getX()*getY()<<endl;
        }
};
class circle:public shape
{
    public:
        void display_area()
        {
            cout<<"Area of Circle is "<<3.14*getX()*getX()<<endl;
        }
};
class photon
{
    private:
        double wavelength;
    public:
        void setWave(double wavelength) {this->wavelength=wavelength;}
        double getWave() { return wavelength; }
};
//E=hc/lambda; lambda(wavelength),
//h(Planck's constant) = (6.626 x 10^-34 J⋅s) , c(speed of light) = 299792458 m / s;
class calculate_photonEnergy:public photon
{
    public:
        void calculator()
        {
            cout<<"\nEnergy of photon is "<<299792458*6.626*pow(0.1,34)/getWave()<<endl;
        }
};
class Matrix
{
    private:
        int a,b,c,d;
    public:
        void createMatrix(int a,int b,int c,int d) { this->a=a;this->b=b;this->c=c;this->d=d; }
        int getA() {return a;}
        int getB() {return b; }
        int getC() {return c; }
        int getD() {return d; }
        virtual void determinant() {}
};
class calculateDeterminant:public Matrix
{
    public:
        void determinant()
        {
            cout<<"Determinant of 2X2 Matrix is "<<(getA()*getC())-(getB()*getD())<<endl;
        }
};
class Proof
{
    private:
        int x,y;
    public:
        void getSides(int x,int y) {this->x=x;this->y=y;}
        virtual void checkRight() {}
};
class Compute:public Proof
{
    public:
        void checkRight()
        {
            if(x==y)
                cout<<"It is a right angle"
        }
};
void swap(shape *p,shape *q)
{
    double temp=p->getX();
    p->get_data((q->getX()));
    q->get_data(temp);
}
int main()
{
    cout<<endl<<endl<<"1. Create a base class called shape. Use this class to store two double type values that"
<<"could be used to compute the area of figures. Derive two specific classes called"
<<"triangle and rectangle from the base shape. Add to the base class, a member"
<<"function get_data() to initialise base class data members and another member"
<<"function display_area() to compute and display the area of figures. Make"
<<"display_area() as a virtual function and redefine this function in the derived classes to"
<<"suit their requirements."
<<"Using these three classes, design a program that will accept dimensions of a"
<<"triangle or a rectangle interactively, and display the area."
<<"Remember the two values given as input will be treated as lengths of two sides in"
<<"the case of rectangles, and as base and height in the case of the triangles, and used as follows:";
    shape *S=NULL; //using base pointer
    // displaying area of triangle
    S=new triangle;
    S->get_data(3.4,5.6);
    S->display_area();
    delete S;
    // displaying area of rectangle
    S=new rectangle;
    S->get_data(3.3,5.9);
    S->display_area();
    delete S;
    // tip: cout << "Object type: " << typeid(*S).name() << endl;(to check to which type it is pointing)

    cout<<endl<<endl<<"2. Extend the above program to display the area of circles. This requires the addition of"
<<"a new derived class 'circle' that computes the area of a circle. Remember, for a circle"
<<"we need only one value, its radius, but the get_data() function in the base class"
<<"requires two values to be passed. (Hint: Make the second argument of get_data()"
<<"function as a default one with zero value.)"<<endl;
    S=new circle;
    S->get_data(4.68);
    S->display_area();
    delete S;
    S=NULL;

    cout<<endl<<endl<<"3. Using the concept of pointers, write a function that swaps the private data values of"
<<"two objects of the same class type.";
    shape S1,S2;
    S1.get_data(3);
    S2.get_data(4);
    swap(&S1,&S2);
    cout<<"Object S1's 'x' is "<<S1.getX()<<" and Object S2's 'x' is "<<S2.getX()<<endl;

    cout<<endl<<endl<<"4. Create a base class called shape. Use this class to store 2 double type values that"
<<"could be used to compute the area of figures. Derive 2 specific classes called triangle"
<<"and rectangle from the base shape. Add to the base class a member function"
<<"get_data() to initialise base class data members and another member function"
<<"display_area() to compute and display the area of figures. Make display_area() as a"
<<"virtual function and redefine this function in derived classes to suit their requirements."
<<"Using these 3 classes, design a program that will accept the dimensions of the"
<<"shapes interactively and display area."<<endl;
    //question 4 is same as question 1.

    cout<<endl<<endl<<"5. Create a base class called Photon. Use this class to store double type value of"
<<"wavelength that could be used to calculate photon energy. Create class calculate_photonEnergy which will"
<<"photon energy. Using these classes, calculate photon energy."<<endl;
    calculate_photonEnergy PE;
    PE.setWave(4);
    PE.calculator();

    cout<<endl<<endl<<"6. Extend above to display the area of circles. For a circle,only one value is needed i.e."
<<"radius but in get_data() function 2 values are passed."<<endl;
    //question 6 is same as 2.

    cout<<endl<<endl<<"7. Create a base class called Matrix. Use this class to store 4 int type values that could"
<<"be used to calculate determinants and create matrices. Create class calculate_determinant which will calculate the determinant of a matrix."
<<"Using these classes, calculate the determinant of the matrix."<<endl;
    Matrix *M;
    M=new calculateDeterminant;
    M->createMatrix(3,5,4,6);
    M->determinant();
    delete M;
    M=NULL;

    cout<<endl<<endl<<"8. Create a base class called proof. Use this class to store two int type values that could"
<<"be used to prove that triangle is a right angled triangle. Create a class compute"
<<"which will determine whether a triangle is a right angled triangle."<<endl;
    //wrong question

    return 0;
}