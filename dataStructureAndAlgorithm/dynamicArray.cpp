#include<iostream>
using namespace std;
class dynamicArray
{
    private:
        int capacity,lastIndex,*ptr;
    public:
        dynamicArray(){ptr=new int[];capacity=1;lastIndex=-1;};
        dynamicArray(dynamicArray&);
        dynamicArray& operator=(dynamicArray&);
        void append(int);
        bool isFull();
        bool isEmpty();
        void del(int);
        int search(int);
        void halfArray();
        void doubleArray();
};
dynamicArray& dynamicArray::operator=(dynamicArray &D)
{
    if(ptr) delete []p;
    lastIndex=D.lastIndex;
    capacity=D.capacity;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=D.ptr[i];
    return *this;
}
dynamicArray::dynamicArray(dynamicArray &D)
{
    lastIndex=D.lastIndex;
    capacity=D.capacity;
    ptr=new int[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=D.ptr[i];
}
int dynamicArray::search(int item)
{
    // try
    // {
        if(isEmpty())
            throw "Array Empty!!";
        for(int i=0;i<=lastIndex;i++)
        {
            if(ptr[i]==item) {return i;}
        }
    // }
    // catch(const char *e)
    // {
    //     cout << "Exception caught : " << e<<endl;
    // }
}
void dynamicArray::del(int item)
{
    try
    {
        if(isEmpty())
            throw "Array Empty!!";
        int pos;
        for(int i=0;i<=lastIndex;i++)
        {
            if(ptr[i]==item) {pos=i;}
        }
        for(int i=pos;i<lastIndex;i++)
        {
            ptr[i]=p[i+1];
        }
        lastIndex--;
        if(lastIndex<capacity/2 && capacity>1)
        {
            halfArray();
        }
    }
    catch(const char *e)
    {
        cout << "Exception caught : " << e<<endl;
    }
}
void dynamicArray::halfArray()
{
    int *temp=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
    {
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr=temp;
    capacity/=2;
}
void dynamicArray::doubleArray()
{
    int *temp=new int[capacity*2];
    for(int i=0;i<=lastIndex;i++)
    {
        temp[i]=ptr[i];
    }
    delete []ptr;
    ptr=temp;
    capacity*=2;
}
bool dynamicArray::isEmpty()
{
    return lastIndex==-1;
}
bool dynamicArray::isFull()
{
    return lastIndex==capacity-1;
}
void dynamicArray::append(int x)
{
    if(isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex]=x;
}
int main()  
{
    // cout<<"multiple: "<<2*0<<endl;
    return 0;
}