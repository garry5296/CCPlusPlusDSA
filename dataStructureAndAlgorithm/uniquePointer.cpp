#include<iostream>
using namespace std;
template<typename X>
class unique_Ptr{
    private:
        X *ptr;
        int reference_count;
    public:
        unique_Ptr(){}
        unique_Ptr(X *temp=nullptr):ptr(temp),reference_count(1)
        {
            cout<<"ctor called!!"<<endl;
        }
        unique_Ptr(unique_Ptr<X> &P) = delete;
        unique_Ptr& operator=(const unique_Ptr<X> &P) = delete;
        unique_Ptr
        int count()
        {
            return reference_count;
        }
        ~unique_Ptr()
        {
            delete ptr;
            ptr=nullptr;
            reference_count=0;
        }
};
unique_Ptr movee(unique_Ptr &P)
{
    unique_Ptr *temp;
    temp=P.ptr;
    P.ptr=nullptr;
    P.reference_count--;
}
int main()
{
    unique_Ptr<int> P1(new int(5));

    return 0;
}