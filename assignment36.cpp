#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
    array <int,5>a1={3,2,4};
    //Q-1
    cout<<a1.at(1)<<endl;

    //Q-2
    cout<<"Size of array is "<<a1.size()<<endl;

    //Q-3
    cout<<a1.front()<<endl;
    cout<<a1.back()<<endl;

    //Q-4
    cout<<a1.at(3)<<endl;

    //Q-5
    array <int,4>::reverse_iterator rv1;
    rv1=a1.rbegin();
    for(rv1=a1.rbegin();rv1!=a1.rend();rv1++)
        cout<<*rv1<<" ";
    
    //Q-6
    if(a1.empty())
        cout<<"Array is Empty!!"<<endl;
    else
        cout<<"Array is Full!!"<<endl;
    
    cout<<endl;
    //Q-7
    array <int,4>::iterator i1;
    sort(a1.begin(),a1.end());
    for(i1=a1.begin();i1!=a1.end();i1++)
        cout<<*i1<<" ";

    //Q-8
    sort(a1.begin(),a1.end(),greater<int>());
    for(i1=a1.begin();i1!=a1.end();i1++)
        cout<<*i1<<" ";

    //Q-9
    

    //Q-10
    array <int,4>answers;
    sort(a1.begin(),a1.end());
    int multip=1;
    for(auto i:a1)
    {
        multip*=i;
    }
    cout<<"---- answers ----"<<multip<<endl;
    for(int i=0;i<a1.size();i++)
    {
        answers[i]=multip/a1.at(i);
        cout<<answers[i]<<" ";
    }
    return 0;
}