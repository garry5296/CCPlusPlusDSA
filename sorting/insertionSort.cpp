#include<iostream>
#include<vector>
using namespace std;
using vectItr=vector<int>::iterator;
vectItr compareInsert(vectItr,vectItr,vectItr);
int main()
{
    vector<int> vec1={40,21,38,68,70,25,90,18,7,54};
    vectItr vI;
    for(vI=vec1.begin();vI!=vec1.end();vI++)
    {
        *(compareInsert(vec1.begin(),vI,vI+1))=*(vI+1);
    }
    for(int i:vec1)
        cout<<i<<",";
    return 0;
}
vectItr compareInsert(vectItr start,vectItr end,vectItr item)
{
    int temp=*item;
    while(start<=end)
    {
        if(*end>temp)
        {
            *(end+1)=*end;
            --end;
        }
        else
            break;
    }
    return ++end;
}
