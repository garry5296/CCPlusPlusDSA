#include<iostream>
using namespace std;
#define EMPTY_QUEUE 1
struct node{
    node *next;
    int item;
};
class QUEUE
{
    private:
        node *front,*rear;
    public:
        QUEUE();
        QUEUE(int);
        QUEUE(QUEUE&);
        ~QUEUE();
        QUEUE& operator=(QUEUE&);
        void insertAtRear(int);
        void deleteAtFront();
        bool isEmpty();
        int getFront();
        int getRear();
        void display();
};
QUEUE::~QUEUE()
{
    while(front)
        deleteAtFront();
}
QUEUE::QUEUE(QUEUE &Q)
{
    if(Q.front)
    {
        node *ptr1=Q.front;
        front=new node;
        node *ptr2=front;
        while(ptr1)
        {
            ptr2->item=ptr1->item;
            if(ptr1->next)
            {
                ptr2->next=new node;
                ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
            ptr2->next=NULL;
        }
        rear=ptr2;
    }
    else
    {
        front=NULL;rear=NULL;
    }
}
QUEUE& QUEUE::operator=(QUEUE &Q)
{
    while(front)
        deleteAtFront();
    if(Q.front)
    {
        node *ptr1=Q.front;
        front=new node;
        node *ptr2=front;
        while(ptr1)
        {
            ptr2->item=ptr1->item;
            if(ptr1->next)
            {
                ptr2->next=new node;
                ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
            ptr2->next=NULL;
        }
        rear=ptr2;
    }
    else
    {
        front=NULL;rear=NULL;
    }
    return *this;
}
int QUEUE::getFront()
{
    if(isEmpty())
        throw EMPTY_QUEUE;
    return front->item;
}
int QUEUE::getRear()
{
    if(isEmpty())
        throw EMPTY_QUEUE;
    return rear->item;
}
void QUEUE::display()
{
    if(isEmpty())
        throw EMPTY_QUEUE;
    node *ptr=front;
    while(ptr)
    {
        cout<<ptr->item<<" ";
        ptr=ptr->next;
    }
}
bool QUEUE::isEmpty()
{
    return (front==NULL && rear==NULL);
}
QUEUE::QUEUE()
{
    front=NULL;
    rear=NULL;
}
QUEUE::QUEUE(int item)
{
    node *temp=new node;
    temp->item=item;
    temp->next=NULL;
    front=rear=temp;
}
void QUEUE::insertAtRear(int item)
{
    node *temp=new node;
    temp->item=item;
    temp->next=NULL;
    if(isEmpty())
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void QUEUE::deleteAtFront()
{
    if(isEmpty())
        throw EMPTY_QUEUE;
    else if(front==rear)
    {
        delete front;
        front=NULL;
        rear=NULL;
    }
    node *temp=front;
    front=front->next;
    delete temp;
}
int main()
{
    QUEUE Q1;
    Q1.insertAtRear(3);
    Q1.insertAtRear(4);
    Q1.insertAtRear(5);
    Q1.insertAtRear(6);
    try
    {
        Q1.display();
    }
    catch(const int a)
    {
        if(a==EMPTY_QUEUE)
            cout<<"Exception: Empty Queue!!"<<endl;
    }
    QUEUE Q2(Q1);
    try
    {
        Q2.display();
    }
    catch(const int a)
    {
        if(a==EMPTY_QUEUE)
            cout<<"Exception: Empty Queue!!"<<endl;
    }
    QUEUE Q3,Q4;
    Q4=Q3=Q2;
    Q4.deleteAtFront();
    cout<<endl;
    try
    {
        Q3.display();
    }
    catch(const int a)
    {
        if(a==EMPTY_QUEUE)
            cout<<"Exception: Empty Queue!!"<<endl;
    }
    cout<<endl;
    try
    {
        Q4.display();
    }
    catch(const int a)
    {
        if(a==EMPTY_QUEUE)
            cout<<"Exception: Empty Queue!!"<<endl;
    }
    return 0;
}