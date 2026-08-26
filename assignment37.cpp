#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
int main()
{
    //Q1
    std::vector<int> v1={3,7,4,5,43,23,5,4,8,7};
    for(int i:v1)
        std::remove(v1.begin(),v1.end(),i);
    v1.erase(); //use lambda expression for condition based deletion.
    for(int i:v1)
        std::cout<<i<<" ";
    
    //Q2
    std::vector<int> v2;
    v2.push_back(5);
    v2.push_back(8);
    std::cout<<std::endl;
    for(int i:v2)
        std::cout<<i<<" ";

    //Q3
    // std<<cout<<"Enter elements";

    //Q4
    std::vector<int> v4;
    for(int i=0;i<v1.size();i++)
    {
        v4.push_back(v1[i]);
        std::cout<<v4[i]<<" ";
    }

    //Q5
    std::vector<int> v5={5,7,2,9,4,11,1,43,3,7,4,5,6};
    int v5_smallest=v5[0],v5_largest=v5[0];
    for(int i:v5)
    {
        if(v5_smallest>i)
            v5_smallest=i;
        if(v5_largest<i)
            v5_largest=i;
    }
    std::cout<<v5_largest<<" "<<v5_smallest<<std::endl;

    //Q6
    std::reverse(v5.begin(),v5.end());
    std::cout<<"**********reversing******"<<std::endl;
    for(int i:v5)
        std::cout<<i<<" ";

    //Q7
    auto sum=std::accumulate(v5.begin(),v5.end(),0);
    std::cout<<"sum of vector is "<<sum<<std::endl;

    //Q8
    std::vector<int> dup;bool flag=false;
    for(int i:v5)
    {
        for(int k:dup)
        {
            if(i==k)
            {
                flag=1;
                break;
            }
        }
        if(flag==false)
        {
            for(int j:v1)
            {
                if(j==i)
                {
                    std::cout<<i<<" ";
                    dup.push_back(i);
                }
            }
        }
        flag=false;
    }

    //Q9
    std::cout<<std::endl;
    v1.push_back(7);
    for(int j:v1)
        std::cout<<j<<" ";

    //Q10
    if(v1.empty())
        std::cout<<"Vector is empty!!"<<std::endl;
    else
        std::cout<<"Vector is not empty!!"<<std::endl;

    
    
    return 0;
}