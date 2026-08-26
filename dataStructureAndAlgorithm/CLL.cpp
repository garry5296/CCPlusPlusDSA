#include<iostream>
using namespace std;
struct node
{
    int item;
    node *next;
};
class CLL
{
    private:
        node *last;
    public:
        CLL() {last=NULL;}
        node* search(int);
        void insertAtBeginning(int);
        void insertAtLast(int);
        void insertAfter(int,int);
        void deleteFirst();
        void deleteLast();
        void deleteAny(node*);
        void display();
};
void CLL::deleteAny(node *t)
{
    if(last==NULL)
        throw "list empty";
    else
    {
        node *temp=last->next;
        while(t!=temp->next)
            temp=temp->next;

        temp->next=t->next;
        delete last
    }
}
void CLL::deleteFirst()
{
    try
    {
        if(last==NULL)
            throw "list empty!!";
        else if(last=last->next)
        {
            delete last;
            last=NULL;
        }
        else{
            node *temp=last->next;
            last->next=temp->next;
            delete temp;
        }
    }
    catch(const char *e)
    {
        cout<<"exception caught : "<<e<<endl;
    }
}
void CLL::deleteLast()
{
    try
    {
        if(last==NULL)
            throw "list empty!!";
        else if(last->next==last)
        {
            delete last;
            last=NULL;
        }
        else
        {
            node *ptr=last;
            while (ptr->next!=last)
            {
                ptr=ptr->next;
            }
            ptr->next=last->next;
            delete last;
            last=ptr;
        }
    }
    catch(const char *e)
    {
        cout<<"exception caught : "<<e<<endl;
    }
}
void CLL::insertAtBeginning(int data)
{
    node *temp=new node;
    temp->item=data;
    if(last==NULL)
    {
        last=temp;
        last->next=last;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
    }
}
void CLL::insertAtLast(int data)
{
    node *temp=new node;
    temp->item=data;
    if(last==NULL)
    {
        last=temp;
        last->next=temp;
    }
    else
    {
        temp->next=last->next;
        last->next=temp;
        last=temp;
    }
}
void CLL::insertAfter(int check,int data)
{
    node *temp=new node;
    temp->item=data;
    node *ptr=search(check);
    try
    {
        if(ptr==last)
        {
            temp->next=ptr->next;
            ptr->next=temp;
            last=temp;
        }
        else if(ptr)
        {
            temp->next=ptr->next;
            ptr->next=temp;
        }
        else
            throw "data not found!!";
    }
    catch(const char *e)
    {
        cout<<"exception caught : "<<e<<endl;
    }
}
node* CLL::search(int data)
{
    node *ptr=last->next;
    if(last==NULL)
        return NULL;
    do
    {
        if(ptr->item==data)
            return ptr;
        else
            ptr=ptr->next;
    } while (ptr!=last->next);
    return NULL;
}
void CLL::display()
{
    try{
        if(last==NULL)
            throw "empty list!!";
        node *ptr=last->next;
        do
        {
            cout<<ptr->item<<" ";
            ptr=ptr->next;
        }while(ptr!=last->next);
    }
    catch(const char *e)
    {
        cout<<"exception caught : "<<e<<endl;
    }
}
int main()
{
    CLL C1;
    C1.insertAtBeginning(3);
    // C1.insertAtBeginning(2);
    C1.display();
    cout<<endl;
    // C1.insertAtLast(4);
    // C1.display();
    // cout<<endl;
    // C1.insertAfter(4,5);
    // C1.display();
    // cout<<endl;
    // C1.insertAfter(5,6);
    // C1.display();
    cout<<endl;
    C1.deleteLast();
    C1.display();
    return 0;
}