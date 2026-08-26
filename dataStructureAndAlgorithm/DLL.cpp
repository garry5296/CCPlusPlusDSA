#include<iostream>
using namespace std;
struct node
{
    node *prev=NULL;
    int item;
    node *next=NULL;
};
class DLL
{
    private:
        node *start=NULL;
    public:
        DLL() {start=NULL;}
        node* search(int);
        void insertAtBeginning(int);
        void insertAtLast(int);
        void insertAfter(int,int);
        void deleteFirst();
        void deleteLast();
        void deleteAny(int);
        void display();
};
void DLL::display()
{
    try
    {
        if(start==NULL)
            throw "List Empty !!";
        node *ptr=start;
        while(ptr)
        {
            cout<<ptr->item<<" ";
            ptr=ptr->next;
        }
    }
    catch(const char *e)
    {
        cout<<"Except caught: "<< e << endl;
    }
}
node* DLL::search(int data)
{
    if(start==NULL)
        return NULL;
    else if (start->item==data)
        return start;
    else
    {
        node *ptr=start->next;
        while(ptr)
        {
            if(ptr->item==data)
                return ptr;
            else
                ptr=ptr->next;
        }
        return NULL;
    }
}
void DLL::insertAtBeginning(int data)
{
    node *temp=new node;
    temp->item=data;
    temp->prev=NULL;
    if(start==NULL)
        start=temp;
    else
    {
        start->prev=temp;
        temp->next=start;
        start=temp;
    }
    temp=NULL;
}
void DLL::insertAtLast(int data)
{
    node *temp=new node;
    temp->item=data;
    temp->next=NULL;
    if(start==NULL)
    {
        start=temp; start->prev=NULL;
        temp=NULL;
    }
    else
    {
        node *ptr=start;
        while(ptr->next)
            ptr=ptr->next;
        ptr->next=temp;
        temp->prev=ptr;
    }
}
void DLL::insertAfter(int check,int data)
{
    node *temp=new node;
    temp->item=data;
    node *ptr=search(check);
    temp->prev=ptr;
    temp->next=ptr->next;
    if(ptr->next)
        ptr->next->prev=temp;
    ptr->next=temp;
    temp=NULL;
}
void DLL::deleteFirst()
{
    try
    {
        if(start==NULL)
            throw "List is empty!!";
        node *temp=start;
        start=start->next;
        start->prev=NULL;
        delete temp;
    }
    catch(const char *e)
    {
        cout<<"Exception caught: "<<e<<endl;
    }
}
void DLL::deleteLast()
{
    try
    {
        if(start==NULL)
            throw "List is empty!!";
        else if(!start->next)
        {
            delete start;
            start=NULL;
        }
        else
        {
            node *ptr=start;
            node *pptr=NULL;
            while(ptr->next)
            {
                pptr=ptr;
                ptr=ptr->next;
            }
            pptr->next=NULL;
            delete ptr;
            ptr=NULL;
        }
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
}
void DLL::deleteAny(int data)
{
    try
    {
        if(start==NULL)
            throw "List Empty!!";
        if(start->item==data)
        {
            start->next->prev=NULL;
            node *temp=start;
            start=start->next;
            delete temp;
        }
        else
        {
            node *ptr=search(data);
            if(ptr)
            {
                node *temp=ptr;
                ptr->next->prev=ptr->prev;
                ptr->prev->next=ptr->next;
                delete temp;
            }
            else
                throw "Data not found!!";
        }
    }
    catch(const char *e)
    {
        cout<<"Exception caught : "<<e<<endl;
    }
}
int main()
{
    DLL D1;
    D1.insertAtBeginning(3);
    D1.display();
    cout<<endl;
    D1.insertAtLast(5);
    D1.display();
    cout<<endl;
    D1.insertAfter(3,4);
    D1.display();
    cout<<endl;
    D1.insertAfter(5,6);
    D1.display();
    cout<<endl;
    D1.deleteFirst();
    D1.display();
    cout<<endl;
    D1.deleteLast();
    D1.display();
    cout<<endl;
    D1.insertAfter(5,6);
    D1.insertAfter(6,7);
    D1.insertAfter(7,4);
    D1.display();
    cout<<endl;
    D1.deleteAny(4);
    D1.display();
    cout<<endl;
    D1.deleteAny(8);
    D1.display();
    cout<<endl;
    return 0;
}