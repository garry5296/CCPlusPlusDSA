#include<iostream>
using namespace std;
#define EMPTY_STACK 1
struct node{
    node *next;
    int item;
};
class STACK{
    private:
        node *top;
    public:
        STACK() {top=NULL;}
        STACK(STACK&);
        STACK& operator=(STACK&);
        void reverse();
        void push(int);
        void pop();
        int peek();
        bool isFull();
        bool isEmpty();
        void display();
        ~STACK();
};
void STACK::reverse()
{
    node *n=NULL;
    if(top)
    {
        node *ptr=top;
        node *temp;
        while(ptr)
        {
            temp=ptr;
            ptr=ptr->next;
            temp->next=n;
            n=temp;
        }
    }
    top=n;
}
STACK::STACK(STACK &S)
{
    if(!S.isEmpty())
    {
        node *ptr1=S.top;
        top=new node;
        node *ptr2=top;
        while(ptr1)
        {
            ptr2->item=ptr1->item;
            if(ptr1->next)
            {
                ptr2->next=new node;
                ptr2=ptr2->next;
            }
            else
                ptr2->next=NULL;
            ptr1=ptr1->next;
        }
    }
    else
        top=NULL;
}
STACK& STACK::operator=(STACK &S)
{
    if(S.isEmpty())
    {
        top=NULL;
        return *this;
    }
    else
    {
        while(top)
            pop();
        node *ptr1=S.top;
        top=new node;
        node *ptr2=top;
        while(ptr1)
        {
            ptr2->item=ptr1->item;
            ptr1=ptr1->next;
            if(ptr1)
            {
                ptr2->next=new node;
                ptr2=ptr2->next;
            }
        }
        return *this;
    }
}
void STACK::display()
{
    node *ptr=top;
    while(ptr)
    {
        cout<<ptr->item<<" ";
        ptr=ptr->next;
    }
}
STACK::~STACK()
{
    while(top)
        pop();
}
int STACK::peek()
{
    if(isEmpty())
        throw EMPTY_STACK;
    return top->item;
}
bool STACK::isEmpty()
{
    return top==NULL;
}
bool STACK::isFull()
{
    return top!=NULL;
}
void STACK::push(int n)
{
    node *temp=new node;
    temp->item=n;
    temp->next=top;
    top=temp;
    temp=NULL;
}
void STACK::pop()
{
    try
    {
        if(isEmpty())
            throw "Stack UnderFlow";
        node *temp=top;
        top=top->next;
        delete temp;
    }
    catch(const char e)
    {
        cout<<"Caught Exception: "<<e<<endl;
    }
}
int main()
{
    STACK S;
    try
    {
        int val=S.peek();
        cout<<"Top Item in Stack is : "<<val<<endl;
    }
    catch(int e)
    {
        if(e==EMPTY_STACK)
            cout<<"Caught Exception: Stack underflow"<<endl;
    }
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.display();
    cout<<endl;
    S.reverse();
    cout<<"Reverse of stack"<<endl;
    S.display();
    STACK S1(S);
    S1.display();
    return 0;
}