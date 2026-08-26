#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next=NULL;
};
class SLL
{
    private:
        node *start=NULL;
    public:
        SLL();
        SLL(int);
        SLL(SLL&);
        // SLL& operator=(SLL&);
        void insertAtStart(int);
        void insertAtLast(int);
        void insertAfter(int,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        void edit(int,int);
        bool search(int);
        int count();
        void display();
};
SLL::SLL() {}
SLL::SLL(int data)
{
    node *temp=new node;
    temp->data=data;
    start=temp;
    temp=NULL;
}
SLL::SLL(SLL &S)
{
    if(S.start==NULL)
    {
        this->start==NULL;
    }
    else
    {
        this->start=new node;
        node *ptr2=this->start;
        node *ptr1=S.start;
        while(ptr1!=NULL)
        {
            ptr2->data=ptr1->data;
            if(ptr1->next!=NULL)
            {
                ptr2->next=new node;
                ptr2=ptr2->next;
            }
            ptr1=ptr1->next;
        }
        ptr2=NULL;
    }
}
void SLL::insertAtStart(int data)
{
    node *temp=new node;
    temp->data=data;
    temp->next=start;
    start=temp;
    temp=NULL;
}
void SLL::insertAtLast(int data)
{
    node *temp=new node;
    temp->data=data;
    node *ptr=start;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=temp;
    temp=NULL;
}
void SLL::insertAfter(int data,int after)
{
    node *temp=new node;
    temp->data=data;
    try
    {
        if(start==NULL)
            throw "linked list is empty!!";
        node *ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->data==after)
                break;
            else
                ptr=ptr->next;
        }
        if(ptr==NULL)
            throw "Node after which data need to be inserted, not found!!";
        temp->next=ptr->next;
        ptr->next=temp;
        temp=NULL;
    }
    catch(const char *e)
    {
        cout<<"Exception : "<<e<<endl;
    }
}
void SLL::deleteFirst()
{
    try
    {
        if(start==NULL)
            throw "linked list empty!!";
        node *temp=start;
        start=start->next;
        delete []temp;
        temp=NULL;
    }
    catch(const char *e)
    {
        cout<<"Exception : "<<e<<endl;
    }
}
void SLL::deleteLast()
{
    try
    {
        if(start==NULL)
            throw "linked list empty!!";
        node *ptr=start;
        node *pptr=NULL;
        while(ptr->next!=NULL)
        {
            pptr=ptr;
            ptr=ptr->next;
        }
        node *temp=ptr;
        pptr->next=NULL;
        delete temp;
        temp=NULL;
    }
    catch(const char *e)
    {
        cout<<"Exception : "<<e<<endl;
    }
}
void SLL::deleteNode(int data)
{
    try
    {
        if(start==NULL)
            throw "linked list empty!!";
        node *ptr=start;
        node *pptr=NULL;
        while(ptr!=NULL)
        {
            if(ptr->data==data)
                break;
            else
            {
                pptr=ptr;
                ptr=ptr->next;
            }
        }
        if(ptr==NULL)
            throw "data to be delete not found!!";
        cout<<"data in ptr: "<<ptr->data;
        node *temp=ptr;
        pptr->next=ptr->next;
        temp->next=NULL;
        delete temp;
        temp=NULL;
    }
    catch(const char *e)
    {
        cout<<"Exception : "<<e<<endl;
    }
}
void SLL::edit(int data,int checkData)
{
    try
    {
        if(start==NULL)
            throw "linked list empty!!";
        node *ptr=start;
        while(ptr!=NULL)
        {
            if(ptr->data==checkData)
                break;
            else
                ptr=ptr->next;
        }
        if(ptr==NULL)
            throw "Data need to be edited not found!!";
        ptr->data=data;
    }
    catch(const char *e)
    {
        cout<<"Exception : "<<e<<endl;
    }
}
bool SLL::search(int data)
{
    if(start==NULL)
        return false;
    node *ptr=start;
    while(ptr!=NULL)
    {
        if(ptr->data==data)
            return true;
        ptr=ptr->next;
    }
    return false;
}
int SLL::count()
{
    int totalCount=0;
    if(start==NULL)
        return totalCount;
    node *ptr=start;
    while(ptr!=NULL)
    {
        totalCount++;
        ptr=ptr->next;
    }
    return totalCount;
}
void SLL::display()
{
    node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
    ptr=NULL;
}
int main()
{
    SLL S1;
    S1.insertAtStart(6);
    S1.insertAtStart(4);
    S1.insertAtStart(3);
    S1.insertAtStart(2);
    S1.insertAtStart(1);
    S1.display();
    SLL S2(S1);
    S2.insertAfter(5,4);
    S2.edit(44,4);
    S2.display();
    cout<<endl;
    S2.deleteNode(44);
    S2.display();
    S2.deleteLast();
    S2.display();
    S2.insertAfter(4,3);
    S2.display();
    cout<<"\nTotal elements in S2 are "<<S2.count();
    if(S2.search(5))
        cout<<"\ndata is present"<<endl;
    else
        cout<<"\ndata is not present"<<endl;
    S2.insertAtStart(10);
    S2.display();
    S2.deleteFirst();
    S2.display();
    cout<<endl;
    S1.display();
    return 0;
}