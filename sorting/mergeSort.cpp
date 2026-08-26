#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>&,int,int);
int main()
{
    vector<int> v1={40,21,38,68,70,25,90,18,7,54};
    mergeSort(v1,0,v1.size()-1);
    for(auto i:v1)
        cout<<i<<" ";
    return 0;
}
void mergeSort(vector<int> &v,int first,int last)
{
    int centre=(first+last)/2;
    if((centre-first)!=0)
    {
        mergeSort(v,first,centre);
    }
    if((centre+1-last)!=0)
    {
        mergeSort(v,centre+1,last);
    }
    int i=first,j=centre+1;
    vector<int> temp;
    while (i<=centre && j<=last)
    {
        if(v[i]>v[j])
        {
            temp.push_back(v[j]);
            j++;
        }
        else
        {
            temp.push_back(v[i]);
            i++;
        }
    }
    if(i<=centre)
    {
        do{
            temp.push_back(v[i]);
            i++;
        }while(i<=centre);
    }
    else
    {
        do{
            temp.push_back(v[j]);
            j++;
        }while(j<=last);
    }
    v=temp;
}