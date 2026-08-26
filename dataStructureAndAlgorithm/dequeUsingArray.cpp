#include<iostream>
using namespace std;
#define QUEUE_EMPTY 1
class deque
{
    private:
        int *ptr;
        int front,rear,capacity;
    public:
        deque();
        deque(deque&);
        deque& operator=(deque&);
        void createDeque(int);
        bool isEmpty();
        bool isFull();
        void insertAtFront(int);
        void insertAtRear(int);
        void deleteAtFront();
        void deleteAtRear();
        int front();
        int rear();
        ~deque();
};
deque::~deque()
{
    delete ptr;
    ptr=NULL;
}
int deque::front()
{
    if(isEmpty())
        throw 1;
    return ptr[front];
}
int deque::rear()
{
    if(isEmpty())
        throw 1;
    return ptr[rear];
}
void deque::insertAtFront(int item)
{
    if(isFull())
        throw "Queue Full!!";
    else if(isEmpty())
    {
        front=capacity-1;
        rear=front;
        ptr[front]=item;
    }
    else if(front==0)
    {
        front=capacity-1;
        ptr[front]=item;
    }
    else
    {
        front--;
        ptr[front]=item;
    }
}
void deque::deleteAtRear()
{
    if(isEmpty())
        throw "Queue Empty!!";
    else if(front-rear==rear-front)
    {
        front=-1;rear=-1;
    }
    else if(rear==0)
    {
        rear=capacity-1;
    }
    else
        rear--;
}
void deque::insertAtRear(int item)
{
    if(isFull())
        throw "Queue Full!!";
    else if(isEmpty())
    {
        front=0;
        rear=0;
        ptr[rear]=item;
    }
    else if(rear==capacity-1)
    {
        rear=0;
        ptr[rear]=item;
    }
    else
    {
        rear++;
        ptr[rear]=item;
    }
}
void deque::deleteAtFront()
{
    if(isEmpty())
        throw "Queue Empty!!";
    else if(front-rear==rear-front)
    {
        front=-1;rear=-1;
    }
    else if(front==capacity-1)
    {
        front=0;
    }
    else
        front++;
}
bool deque::isEmpty()
{
    return front==-1 && rear==-1;
}
bool deque::isFull()
{
    return (front-rear=1 || rear-front=capacity-1)
}
void deque::createDeque(int size)
{
    ptr=new int[size];
    front=-1;rear=-1;
    capacity=size;
}
deque::deque(deque &d)
{
    if(!isEmpty)
    {
        ptr=new int[d.capacity];
        rear=d.rear;
        front=d.front;
        capacity=d.capacity;
    }
    else
    {
        ptr=NULL;capacity=0;
    }
}
deque& deque::operator=(deque &d)
{
    if(!isEmpty)
    {
        ptr=new int[d.capacity];
        rear=d.rear;
        front=d.front;
        capacity=d.capacity;
    }
    else
    {
        ptr=NULL;capacity=0;
    }
    return *this;
}
deque::deque()
{
    ptr=NULL;capacity=0;
}

int main()
{
    
}