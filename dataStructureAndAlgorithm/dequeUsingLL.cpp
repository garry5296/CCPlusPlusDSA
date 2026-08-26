#include<iostream>
#include<stdio.h>
#define DEQUE_UNDERFLOW 1
struct node{
    node *prev;
    int item;
    node *next;
};
class deque{
    private:
        node *front,*rear;
        int totalElements;
    protected:
        node* newNode();
    public:
        deque() {front=NULL;rear=NULL;totalElements=0;}
        void push_back(int);
        void push_front(int);
        void pop_back();
        void pop_front();
        bool isEmpty();
        int frontElement();
        int backElement();
        int size();
        void clear();
};
bool deque::isEmpty()
{
    return (front==NULL && rear==NULL);
}
void deque::clear()
{
    while(front)
        pop_front();
}
int deque::size()
{
    return totalElements;
}
int deque::backElement()
{
    if(isEmpty())
        throw DEQUE_UNDERFLOW;
    else
        return rear->item;
}
int deque::frontElement()
{
    if(isEmpty())
        throw DEQUE_UNDERFLOW;
    else
        return front->item;
}
node* deque::newNode()
{
    node *n=new node;
    n->prev=NULL;
    n->next=NULL;
}
void deque::pop_back()
{
    if(isEmpty())
        throw DEQUE_UNDERFLOW;
    else if(front==rear)
    {
        delete front;
        front=rear=NULL;
        --totalElements;
    }
    else
    {
        rear=rear->prev;
        delete rear->next;
        rear->next=NULL;
        --totalElements;
    }
}
void deque::pop_front()
{
    if(isEmpty())
        throw DEQUE_UNDERFLOW;
    else if(front==rear)
    {
        delete front;
        front=rear=NULL;
        --totalElements;
    }
    else
    {
        front=front->next;
        delete front->prev;
        front->prev=NULL;
        --totalElements;
    }
}
void deque::push_back(int data)
{
    node *n=newNode();
    n->item=data;
    if(isEmpty()) { front=rear=n; }
    else
    {
        rear->next=n;
        n->prev=rear;
        rear=n;
    }
    ++totalElements;
}
void deque::push_front(int data)
{
    node *n=newNode();
    n->item=data;
    if(front==NULL && rear==NULL)
    {
        front=rear=n;
    }
    else
    {
        front->prev=n;
        n->next=front;
        front=n;
    }
    ++totalElements;
}
int main()
{

    return 0;
}