#include<iostream>
using namespace std;
struct node{
    node *prev,*next;
    int item;
};
class CDLL
{
    private:
        node *start;
    public:
        CDLL() {start=NULL;}
        CDLL(CDLL&);
        void insertInBeginning(int);
        void insertAtLast(int);
        void insertAfter(node*,int);
        node* search(int);
        void display();
};
CDLL::CDLL(CDLL &C)
{
    if(C.start==NULL)
    {
        start=NULL;
    }
    else
    {
        node *ptr=C.start;
        do
        {
            insertAtLast(ptr->item);
            ptr=ptr->next;
        } while(ptr!=C.start);
    }
}
void CDLL::insertAfter(node *ptr,int data)
{
    node *temp=new node;
    temp->item=data;
    try
    {
        if(ptr)
            throw "Node not found after which we need to insert!!";
        else
        {
            temp->prev=ptr;
            temp->next=ptr->next;
            ptr->next->prev=temp;
            ptr->next=temp;
        }
    }
    catch(const char *e)
    {
        cout<<"Caught exception : "<<e<<endl;
    }
}
void CDLL::insertAtLast(int data)
{
    node *temp=new node;
    temp->item=data;
    if(start==NULL)
    {
        start=temp;
        start->next=temp;
        start->prev=temp;
    }
    else
    {
        temp->prev=start->prev;
        temp->next=start;
        start->prev->next=temp;
        start->prev=temp;
    }
    temp=NULL;
}
void CDLL::insertInBeginning(int data)
{
    node *temp=new node;
    temp->item=data;
    if(start==NULL)
    {
        start=temp;
        start->prev=temp;
        start->next=temp;
    }
    else
    {
        temp->next=start;
        temp->prev=start->prev;
        start->prev->next=temp;
        start->prev=temp;
        start=temp;
    }
    // temp=NULL;
}
node* CDLL::search(int data)
{
    try
    {
        if(start==NULL)
            throw "Empty List!!";
        node *ptrFront=start;
        node *ptrBack=start->prev;
        do
        {
            if(ptrFront->item==data)
                return ptrFront;
            else if (ptrBack->item==data)
                return ptrBack;
            ptrFront=ptrFront->next;
            ptrBack=ptrBack->prev;
        }
        while(ptrFront!=ptrBack);
        if(ptrFront->item==data)
            return ptrFront;
        return NULL;
    }
    catch(const char *e)
    {
        cout<<"Caught exception : "<<e<<endl;
        return NULL;
    }
}
void CDLL::display()
{
    try
    {
        if(start==NULL)
            throw "Empty List!!";
        node *ptr=start;
        do
        {
            cout<<ptr->item<<" ";
            ptr=ptr->next;
        }
        while(start!=ptr);
        ptr=NULL;
    }
    catch(const char *e)
    {
        cout<<"Caught exception : "<<e<<endl;
    }
}
// int main()
// {
//     CDLL c1;
//     c1.insertAtLast(2);
//     // C1.insertAfter(search(2),7);
//     // c1.display();
//     // cout<<endl;
//     c1.insertInBeginning(5);
//     c1.insertAtLast(6);
//     c1.insertInBeginning(4);
//     c1.insertInBeginning(3);
//     c1.insertInBeginning(2);
//     c1.display();
//     cout<<endl;
//     c1.insertInBeginning(1);
//     c1.display();
//     cout<<endl;
//     // C1.insertAfter(search(6),7);
//     c1.insertAtLast(6);
//     c1.display();
//     CDLL c2(c1);
//     // c2.display();
//     return 0;
// }