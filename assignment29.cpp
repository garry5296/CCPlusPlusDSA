#include<iostream>
using namespace std;
class Item;
class Invent2;
class Dollar;
class Complex{
    private:
        double real,imag;
    public:
        // Complex() {real=0,imag=0;}
        // Complex(double real=0) {this->real=real;this->imag=0;}
        Complex(double real=0, double imag=0)
        {
            // cout<<"real is "<<real<<endl;
            this->real=real;
            this->imag=imag;
        }
        void setData(double real,double imag)
        {
            this->real=real;this->imag=imag;
        }
        operator int()
        {
            return real;
        }
        friend ostream& operator<<(ostream&,const Complex&);
};
class Product{
    private:
        int prodId,price;
    public:
        void setData(int a,int b) {prodId=a;price=b;}
        int getprodId() {return prodId;}
        int getprice() {return price;}
        operator Item();
};
class Item{
    private:
        int itemId,itemPrice;
    public:
        Item(){itemId=0;itemPrice=0;}
        void setData(int a,int b) {itemId=a;itemPrice=b;}
        int getItemId() {return itemId;}
        int getitemPrice() {return itemPrice;}
        // Item(Product P)
        // {
        //     cout<<"PC called Product to Item conversion."<<endl;
        //     itemId=P.getprodId();
        //     itemPrice=P.getprice();
        // }
        friend ostream& operator<<(ostream&,const Item&);
};
class Invent1{
    private:
        float a,b;
    public:
        Invent1(){a=0;b=0;}
        Invent1(float x=0,float y=0){a=x;b=y;}
        float getA(){return a;}
        float getB(){return b;}
        operator float()
        {
            return a;
        }
        float operator,(float x)
        {
            return x;
        }
        operator Invent2();
};
class Invent2{
    private:
        float a,b;
    public:
        Invent2(){a=0;b=0;}
        Invent2(float x,float y){a=x;b=y;}
        void setAB(float x,float y){a=x;b=y;}
        void display() {cout<<"a = "<<a<<" b = "<<b;}
};
class Rupee{
    private:
        float a;
    public:
        Rupee() {a=0;}
        Rupee(float x) {a=x;cout<<"PC called for rupee"<<endl;}
        void setData(float x) {a=x;}
        operator int()
        {
            cout<<"casting operator called for rupee"<<endl;
            return (int)a;
        }
        int getRupee() {return a;}
        void display() { cout<<"Rupee = "<<a<<endl; }
};
class Dollar{
    private:
        float a;
    public:
        Dollar() {a=0;}
        Dollar(float x) {a=x;cout<<"PC called for dollar"<<endl;}
        Dollar(Rupee R) {cout<<"PC called to convert rupee to dollar"<<endl;a=R.getRupee()/100.00;}
        operator Rupee()
        { 
            Rupee temp;
            temp.setData(a*100);
            return temp;
        }
        void display() { cout<<"Dollar = "<<a<<endl; }
};
class Minute{
    private:
        int minute;
    public:
        Minute() {minute=0;}
        void setData(int x){minute=x;}
        void display()
        {
            cout<<"Minutes = "<<minute<<endl;
        }
};
class Time{
    private:
        int hours,minutes,seconds;
    public:
        Time(){}
        Time(int a)
        {
            hours=a/3600;
            a=a%3600;
            minutes=a/60;
            seconds=a%60;
        }
        Time(int x,int y) {hours=x;minutes=y;seconds=0;}
        void display()
        {
            cout<<endl<<"Hours="<<hours<<" minutes="<<minutes<<" seconds="<<seconds<<endl;
        }
        operator Minute()
        {
            Minute temp;
            temp.setData(minutes);
            return temp;
        }
};
Invent1::operator Invent2()
{
    Invent2 temp;
    temp.setAB(a,b);
    return temp;
}
Product::operator Item()
{
    Item temp;
    temp.setData(prodId,price);
    return temp;
}
ostream& operator<<(ostream &O,const Complex &A)
{
    O<<"real = "<<A.real<<" imag = "<<A.imag;
    return O;
}
ostream& operator<<(ostream &O,const Item &I)
{
    O<<"itemid = "<<I.itemId<<" price = "<<I.itemPrice;
    return O;
}
int main()
{
    cout<<"1.Write a C++ program to convert Primitive type to Complex type."<<endl;
    int x=5;
    Complex C;
    C=x;
    cout<<C;

    cout<<endl<<endl<<"2. Write a C++ program to convert Complex type to Primitive type."<<endl;
    Complex c1;
    c1.setData(3,4);
    cout<<"y is "<<int(c1);

    cout<<endl<<endl<<"3. Create a Product class and convert Product type to Item type using constructor"<<endl;
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    cout<<i1<<endl;

    cout<<endl<<endl<<"4. Create Product class and convert Product type to Item type using casting operator"<<endl;
    Item i2;
    Product p2;
    p2.setData(5,6);
    cout<<Item(p2);

    cout<<endl<<endl<<"5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add"
<<endl<<"functions to support Invent1 to float and Invent1 to Invent2 type."<<endl;
    Invent1 s1=(4,5);
    Invent2 d2;
    float tv;
    tv=s1;
    d2=s1;
    d2.display();
    cout<<endl<<tv;

    cout<<endl<<endl<<"6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in"
<<endl<<"int ) to Time class."<<endl;
    int duration;
    cout<<"Enter time duration in seconds";
    cin>>duration;
    Time t2 = duration;
    t2.display();

    cout<<endl<<endl<<"7. Create two class Time and Minute and add required getter and setter including constructors."
<<endl<<"Now you need to type cast Time object into Minute to fetch the minute from Time and display it.";
    Time t1(2,30);
    t1.display();
    Minute m1;
    m1.display();
    m1=t1;   // Fetch minute from time
    t1.display();
    m1.display();

    cout<<endl<<endl<<"8. Create a Rupee class and convert it into int. And Display it."<<endl;
    Rupee r1 = 10;
    int x1 = r1;
    cout<<x1;

    cout<<endl<<endl<<"9. Create a Dollar class and add necessary functions to support int to Dollar type conversion."<<endl;
    int x2 = 50;
    Dollar d1;
    d1 = x2;
    d1.display();

    cout<<endl<<endl<<"10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to"
<<endl<<"Dollar and Dollar to Rupee conversion.";
    Rupee r = 23;
    Dollar d = r; // Rupee to Dollar conversion
    d.display();
    r.display();
    r = d; // Dollar to Rupee Conversion
    d.display();
    r.display();


    return 0;
}