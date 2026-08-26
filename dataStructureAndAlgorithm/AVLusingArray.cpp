#include<iostream>
using namespace std;
struct node
{
    node *left;
    int item;
    node *right;
    int height;
};
class AVL{
    private:
        node *root;
    protected:
        void llRotation();
        void setALeft(node*);
    public:
        AVL():root(NULL){}
        void insertion(int);
        int search(int);
};
void AVL::llRotation()
{

}
void AVL::setALeft(node **ptr,int *&b)
{
    if(ptr->left->left)
    {
        if(ptr->left->right)
            if(abs(ptr->left->left->height - ptr->left->right->height) > 1)
                b=ptr;
        else
            if(ptr->left->left->height > 1)
                b=ptr->left->left->height;
    }
    else if(ptr->left->right)
        if(ptr->left->right->height > 1)
            b=ptr->left->right->height;
}
void AVL::setARight(node **ptr,int *&b)
{
    if(ptr->right->left)
    {
        if(ptr->right->right)
            if(abs(ptr->right->left->height - ptr->right->right->height) > 1)
                b=ptr;
        else
            if(ptr->right->left->height > 1)
                b=ptr->right->left->height;
    }
    else if(ptr->right->right)
        if(ptr->right->right->height > 1)
            b=ptr->right->right->height;
}
void AVL::insertion(int data)
{
    node *a,*b,*c;
    node *temp=new node;
    temp->item=data;
    temp->left=temp->right=NULL;
    temp->height=1;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node *ptr=root;
        while(temp)
        {
            ptr->height++;
            if(data < ptr->item)
            {
                setALeft(ptr,a);
                if(ptr->left)
                {
                    ptr=ptr->left;
                }
                else
                {
                    ptr->left=temp;
                    temp=NULL;
                }
            }
            else
            {
                setARight(ptr,a);
                if(ptr->right)
                {
                    ptr=ptr->right;
                }
                else
                {
                    ptr->right=temp;
                    temp=NULL;
                }
            }
        }
    }

}
int main()
{
    return 0;
}