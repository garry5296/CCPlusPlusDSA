#include<iostream>
using namespace std;
class QUEUE{
    private:
        int *ptr;
        int capacity,front,rear;
    public:
        QUEUE() {ptr=NULL,capacity=0;front=-1;rear=-1;}
        QUEUE(int);
        QUEUE(QUEUE&);
        QUEUE& operator=(QUEUE&);
        ~QUEUE();
        void insertAtRear(int);
        void deleteAtFront();
        int getFront();
        int getRear();
        bool isFull();
        bool isEmpty();
        void display();
        int count();
};
QUEUE::QUEUE(QUEUE &Q)
{
    capacity=Q.capacity;
    front=Q.front;
    rear=Q.rear;
    ptr=new int[capacity];
    for(int i=0;i<capacity;i++)
        *(ptr+i)=Q.ptr[i];
}
QUEUE& QUEUE::operator=(QUEUE &Q)
{
    delete ptr[];
    capacity=Q.capacity;
    front=Q.front;
    rear=Q.rear;
    ptr=new int[capacity];
    for(int i=0;i<capacity;i++)
        *(ptr+i)=Q.ptr[i];
    return *this;
}
int QUEUE::count()
{
    if(front==-1 && rear==-1)
        throw "Queue is Empty";
    if(rear<front)
        return capacity-front-rear+1;
    else if(front<rear)
        return rear-front+1;
    else
        return 1;
}
QUEUE::~QUEUE()
{
    delete []ptr;
}
int QUEUE::getFront()
{
    if(front==-1 && rear==-1)
        throw "Queue is Empty!!";
    return *(ptr+front);
}
int QUEUE::getRear()
{
    if(front==-1 && rear==-1)
        throw "Queue is Empty!!";
    return *(ptr+rear);
}
void QUEUE::display()
{
    cout<<"---------------------"<<endl;
    cout<<"|";
    for(int i=0;i<capacity;i++)
        cout<<" "<<ptr[i]<<" |";
    cout<<endl<<"---------------------"<<endl<<"Front = "<<front<<" , Rear = "<<rear<<endl;
}
QUEUE::QUEUE(int size)
{
    capacity=size;
    ptr=new int[capacity];
    front=-1;
    rear=-1;
}
bool QUEUE::isFull()
{
    return (front-rear == 1 || rear-front == capacity - 1);
}
bool QUEUE::isEmpty()
{
    return (!isFull());
}
void QUEUE::insertAtRear(int item)
{
    try
    {
        if(isFull()) //when queue is already full
            throw "Queue full!!";
        else if(front==-1 && rear==-1) //when very first element is added
        {
            front++;
            rear++;
            *(ptr+rear)=item;
        }
        else if(rear<capacity-1)
        {
            rear++;
            *(ptr+rear)=item;
        }
        else
        {
            rear=0;
            *(ptr+rear)=item;
        }
        cout<<endl<<"=========Insertion========"<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
}
void QUEUE::deleteAtFront()
{
    try
    {
        if(front==-1 && rear==-1)
            throw "Queue Empty!!";
        else if(front==rear)
        {
            front=-1;rear=-1;
        }
        else if(front<capacity-1)
        {
            front++;
        }
        else
            front=0;
        cout<<endl<<"=========Deletion========"<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
}
int main()
{
    QUEUE Q1(5);
    Q1.insertAtRear(4);
    Q1.display();
    Q1.insertAtRear(3);
    Q1.display();
    Q1.insertAtRear(2);
    Q1.display();
    Q1.insertAtRear(8);
    Q1.display();
    Q1.insertAtRear(1);
    Q1.display();
    try
    {
        int val=Q1.getFront();
        cout<<"Value at front = "<<val<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
    Q1.insertAtRear(4);
    Q1.display();
    Q1.deleteAtFront();
    Q1.display();
    Q1.deleteAtFront();
    Q1.display();
    Q1.deleteAtFront();
    Q1.display();
    try
    {
        int val=Q1.count();
        cout<<"count = "<<val<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
    Q1.deleteAtFront();
    try
    {
        int val=Q1.getRear();
        cout<<"Value at rear = "<<val<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
    Q1.display();
    try
    {
        int val=Q1.count();
        cout<<"count = "<<val<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
    Q1.insertAtRear(1);
    Q1.display();
    try
    {
        int val=Q1.count();
        cout<<"count = "<<val<<endl;
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
    Q1.deleteAtFront();
    Q1.display();
    Q1.deleteAtFront();
    Q1.display();
    Q1.deleteAtFront();
    return 0;
}