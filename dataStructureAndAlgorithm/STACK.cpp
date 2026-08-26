#include<iostream>
using namespace std;
#define EMPTY_STACK 1
class STACK
{
    private:
        int *ptr;
        int capacity;
        int top;
    public:
        STACK(){ptr=NULL;capacity=0;top=-1;}
        STACK(int);
        STACK(STACK&);
        STACK& operator=(STACK&);
        void createStack(int);
        void push(int);
        int peek();
        void pop();
        bool isFull();
        bool isEmpty();
        void display();
        ~STACK();
};
STACK& STACK::operator=(STACK &S)
{
    if(S.ptr!=NULL)
    {
        if(ptr!=NULL)
            delete []ptr;
        capacity=S.capacity;
        ptr=new int[capacity];
        top=-1;
        while(top!=S.top)
        {
            ++top;
            *(ptr+top)=*(S.ptr+top);
        }
    }
    return *this;
}
STACK::STACK(STACK &S)
{
    capacity=S.capacity;
    ptr=new int[capacity];
    top=-1;
    while(top!=S.top)
    {
        ++top;
        *(ptr+top)=*(S.ptr+top);
    }
}
STACK::~STACK()
{
    if(ptr!=NULL)
        delete []ptr;
}
bool STACK::isFull()
{
    return capacity-1==top;
}
bool STACK::isEmpty()
{
    return top==-1;
}
STACK::STACK(int a)
{
    capacity=a;
    top=-1;
    ptr=new int[a];
}
void STACK::createStack(int a)
{
    capacity=a;
    top=-1;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new int[a];
}
void STACK::push(int data)
{
    try
    {
        if(isFull())
            throw "Stack Overflow!!";
        ++top;
        *(ptr+top)=data;
    }
    catch(const char *e)
    {
        cout<<"Exception caught:  "<<e<<endl;
    }
}
int STACK::peek()
{
    if(isEmpty())
        throw EMPTY_STACK;
    return *(ptr+top);
}
void STACK::pop()
{
    try
    {
        if(isEmpty())
            throw "Stack UnderFlow";
        --top;
    }
    catch(const char *e)
    {
        cout<<"Exception caught:  "<<e<<endl;
    }
}
void STACK::display()
{
    try
    {
        if(isEmpty())
            throw "Under Flow!!";
        int i=top;
        while(i!=-1)
        {
            cout<<*(ptr+i)<<" ";
            --i;
        }
    }
    catch(const char *e)
    {
        cout<<"Exception caught:  "<<e<<endl;
    }
}
int main()
{
    STACK S1;
    S1.createStack(5);
    S1.push(1);
    try
    {
        int val=S1.peek();
        cout<<val<<endl;
    }
    catch(int e)
    {
        if(e==EMPTY_STACK)
            cout<<"Caught Exception: Stack underflow"<<endl;
    }
    S1.push(-4);
    S1.pop();
    S1.pop();
    S1.display();
    S1.push(3);
    S1.push(6);
    S1.push(9);
    S1.display();
    STACK S2=S1;
    S2.display();
    return 0;
}
