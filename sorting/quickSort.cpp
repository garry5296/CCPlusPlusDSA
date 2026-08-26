#include<iostream>
#include<vector>
using namespace std;
using vectItr=vector<int>::iterator;
void quickSortt(vector<int>&,int,int);
int main()
{
    vector<int> vec1={40,21,38,68,70,25,90,18,7,54};
    quickSortt(vec1,0,vec1.size()-1);

    for(int i:vec1)
        cout<<i<<" ";
    return 0;
}
void quickSortt(vector<int> &v,int l,int r)
{
    int loc=l,left=l,right=r;
    while(l<r)
    {
        if(loc<r)
        {
            if(v[loc]<v[r])
                r--;
            else
            {
                int temp;
                temp=v[loc];
                v[loc]=v[r];
                v[r]=temp;
                loc=r;
            }
        }
        else
        {
            if(v[loc]>v[l])
                l++;
            else
            {
                int temp;
                temp=v[loc];
                v[loc]=v[l];
                v[l]=temp;
                loc=l;
            }
        }
    }
    if((loc-left)>1)
        quickSortt(v,left,loc-1);
    if((right-loc)>1)
        quickSortt(v,loc+1,right);
}