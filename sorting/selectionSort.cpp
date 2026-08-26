#include<iostream>
#include<array>
using namespace std;
template<typename X>
int minValue(X&,int,int);
template<typename X>
void swaP(X&,int,int);
int main()
{
    array<int,10> arr1={40,21,38,68,70,25,90,18,7,54};
    // array<int,10>::iterator arrItr;
    // for(arrItr=arr1.begin();arrItr!=arr1.end();arrItr++)
    // {
    //     swaP(arr1,arrItr,min(arr1,arrItr,arr1.size()));
    // }
    for(int i=0;i<=arr1.size()-2;i++)
    {
        swaP(arr1,i,minValue(arr1,i,arr1.size()-1));
    }
    for(auto i:arr1)
        cout<<i<<" ";
    return 0;
}
template<typename X>
int minValue(X &a,int start,int end)
{
    int min=start;
    for(int i=start+1;i<=end;i++)
    {
        if(a[min]>a[i])
            min=i;
    }
    return min;
}
template<typename X>
void swaP(X &a,int x,int y)
{
    int temp=a.at(x);
    a.at(x)=a.at(y);
    a.at(y)=temp;
}