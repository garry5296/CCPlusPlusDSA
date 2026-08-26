#include<iostream>
#include<string.h>
// #include<array>
#include "array.cpp"
using namespace std;
template <typename X>X addition(X,X);
template <typename X>X great(X,X);
template <typename X>X greatest(X,X,X);
template <typename X>void swapp(X*,X*);
template <typename X>
class arrayTemplate:public array
{
    public:
        void createArray(int a)
        {
            setCapacity(a);
            if(ptr)
        }

}
// template <typename X>X add_arry_items(X*);
int main()
{
    //Q-1
    cout<<addition<string>("Gurpreet ","Singh")<<endl;
    cout<<addition<int>(3,5)<<endl;
    cout<<addition<float>(3.4,2.3)<<endl;

    //Q-2
    cout<<great<string>("Gurpreet ","Singh")<<endl;
    cout<<great<int>(3,5)<<endl;
    cout<<great<float>(3.4,2.3)<<endl;

    //Q-3
    cout<<greatest<string>("Gurpreet","Singh","Singhi")<<endl;
    cout<<greatest<int>(3,5,4)<<endl;
    cout<<greatest<float>(7.8,3.4,2.3)<<endl;

    //Q-4
    int a=3,b=4;
    float c=3.2,d=3.4;
    string e="home",f="sweet";
    swapp<int>(&a,&b);
    swapp<float>(&c,&d);
    swapp<string>(&e,&f);
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    cout<<"e = "<<e<<" f = "<<f<<endl;

    //Q-5
    cout<<addition<int>(5,15)<<endl;

    // //Q-6
    // array <int,4>a1={3,4,3,9};
    // array <float,4>a2={3.9,7.1,6.3,4.4};
    // array <string,3>a3={"Gurpreet ","Singh ","Rajput"};
    // cout<<add_arry_items<int>(a1);

    return 0;
}
template <typename X>
X addition(X a,X b)
{
    return a+b;
}
template <typename X>
X great(X a,X b)
{
    return a>b?a:b;
}
template <typename X>
X greatest(X a,X b,X c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}
template <typename X>
void swapp(X *a,X *b)
{
    X temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
// template <typename X>
// X add_arry_items(X *a)
// {
//     X sum=0;
//     for(int i:* a)
//         sum+=i;
//     return sum;
// }