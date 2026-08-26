#include<iostream>
using namespace std;
#define EMPTY_QUEUE 1
struct node
{
    int item;
    int priority;
    node *next;
};
class priorityQueue
{
    private:
        node *start;
        int totalSize;
    public:
        priorityQueue(){start=NULL;totalSize=0;}
        priorityQueue(priorityQueue&);
        ~priorityQueue();
        priorityQueue& operator=(priorityQueue&);
        void push(int,int);
        int top();
        void pop();
        bool isEmpty();
        int sizeOfQueue();
        void display();
};
priorityQueue::~priorityQueue()
{
    while(start)
        pop();
}
priorityQueue::priorityQueue(priorityQueue &PQ)
{
    if(PQ.start)
    {
        node *temp=new node;
        start=temp;
        node *ptr=PQ.start;
        totalSize=PQ.totalSize;
        while(ptr)
        {
            temp->item=ptr->item;
            temp->priority=ptr->priority;
            if(ptr->next)
            {
                temp->next=new node;
                temp=temp->next;
            }
            ptr=ptr->next;
        }
        temp->next=NULL;
    }
    else
        start=NULL;
}
priorityQueue& priorityQueue::operator=(priorityQueue &PQ)
{
    if(start)
    {
        while(start)
            pop();
    }
    if(PQ.start)
    {
        node *temp=new node;
        start=temp;
        node *ptr=PQ.start;
        totalSize=PQ.totalSize;
        while(ptr)
        {
            temp->item=ptr->item;
            temp->priority=ptr->priority;
            if(ptr->next)
            {
                temp->next=new node;
                temp=temp->next;
            }
            ptr=ptr->next;
        }
        temp->next=NULL;
    }
    else
        start=NULL;
    return *this;
}
int priorityQueue::sizeOfQueue()
{
    return totalSize;
}
bool priorityQueue::isEmpty()
{
    if(start)
        return false;
    else
        return true;
}
void priorityQueue::pop()
{
    if(start)
    {
        node *tmp=start;
        start=start->next;
        delete tmp;
        totalSize--;
    }
    else
        throw EMPTY_QUEUE;
}
int priorityQueue::top()
{
    if(start)
        return start->item;
    else
        throw EMPTY_QUEUE;
}
void priorityQueue::push(int data,int prio)
{
    node *tmp=new node;
    tmp->item=data;
    tmp->priority=prio;
    if(!start || (start->priority < tmp->priority))
    {
        tmp->next=start;
        start=tmp;
    }
    else
    {
        node *ptr=start;
        while(ptr->next)
        {
            if(ptr->next->priority < tmp->priority)
                break;
            ptr=ptr->next;
        }
        tmp->next=ptr->next;
        ptr->next=tmp;
    }
    totalSize++;
}
void priorityQueue::display()
{
    if(!start)
        throw EMPTY_QUEUE;
    else
    {
        node *ptr=start;
        while(ptr)
        {
            cout<<ptr->item<<" ";
            ptr=ptr->next;
        }
    }
    cout<<endl;
}
int main()
{
    priorityQueue PQ1;
    PQ1.push(1,9);
    priorityQueue PQ4(PQ1);
    PQ4.display();
    PQ1.push(3,7);
    PQ1.push(3,4);
    PQ1.push(6,3);
    PQ1.push(9,2);
    PQ1.push(7,8);
    PQ1.push(2,1);
    PQ1.display();
    cout<<"Element on the top = "<<PQ1.top()<<endl;
    if(PQ1.isEmpty())
        cout<<"Priority Queue is empty!!"<<endl;
    else
        cout<<"Priority Queue is not empty!!"<<endl;
    priorityQueue PQ2(PQ1);
    cout<<endl;
    PQ2.display();
    priorityQueue PQ3;
    PQ3.push(3,5);
    PQ3.display();
    PQ3=PQ2;
    PQ3.display();
    return 0;
}