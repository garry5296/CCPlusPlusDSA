#include<iostream>
#include<stdio.h>
using namespace std;
#define DUPLICATE_ITEM 1
#define EMPTY_TREE 2
#define ITEM_NOT_FOUND 3
struct node{
    node *left,*right;
    int item;        
};
class BST
{
    private:
        node *root;
        void recInOrder(node*);
        void recPreOrder(node*);
        void recPostOrder(node*);
    protected:
        node *leftMost(node*);
    public:
        BST();
        ~BST();
        void inOrder();
        void preOrder();
        void postOrder();
        void insert(int);
        node* search(int);
        void deletion(int);
};
BST::BST()
{
    root=NULL;
}
BST::~BST()
{

}
node* BST::search(int data)
{
    if(!root)
        throw EMPTY_TREE;
    node *ptr=root;
    {
        if(ptr->item==data)
            return ptr;
        else if(ptr->item>data)
            ptr=ptr->left;
        else
            ptr=ptr->right;
    }
    return NULL;
}
void BST::deletion(int data)
{
    if(!root)
        throw EMPTY_TREE;
    else
    {
        node *ptr=root;
        node *parentNodeToBeDeleted;
        while(ptr)
        {
            if(ptr->item==data)
                break;
            else if(ptr->item>data)
            {
                parentNodeToBeDeleted=ptr;
                ptr=ptr->left;
            }
            else
            {
                parentNodeToBeDeleted=ptr;
                ptr=ptr->right;
            }
        }
        /*when item is not present*/
        if(!ptr)
            throw ITEM_NOT_FOUND;
        else
        {
            node *prevPtr=parentNodeToBeDeleted;
            if(ptr->left==NULL && ptr->right==NULL)
            {
                if(data<prevPtr->item)
                {
                    node *n=prevPtr->left;
                    prevPtr->left=NULL;
                    delete n;
                }else{
                    node *n=prevPtr->right;
                    prevPtr->right=NULL;
                    delete n;
                }
            }
            else
            {
                while(ptr)
                {
                    if(ptr->left)
                    {
                        prevPtr=ptr;
                        ptr=ptr->left;
                    }
                }
                node *temp=prevPtr->left;
                prevPtr->left=NULL;
                if(data < parentNodeToBeDeleted->item)
                {
                    node *exitNode=parentNodeToBeDeleted->left;
                    parentNodeToBeDeleted->left=temp;
                    if(exitNode->left->left && exitNode->left->right)
                        parentNodeToBeDeleted->left->left=exitNode->left;
                    if(exitNode->right)
                    parentNodeToBeDeleted->left->right=exitNode->right;
                    delete exitNode;
                }
            }
        }
    }
}
void BST::inOrder()
{
    recInOrder(root);
}
void BST::preOrder()
{
    recPreOrder(root);
}
void BST::postOrder()
{
    recPostOrder(root);
}
void BST::recInOrder(node *ptr)
{
    if(ptr)
    {
        recInOrder(ptr->left);
        cout<<ptr->item<<" ";
        recInOrder(ptr->right);
    }
}
void BST::recPreOrder(node *ptr)
{
    if(ptr)
    {
        cout<<ptr->item<<" ";
        recPreOrder(ptr->left);
        recPreOrder(ptr->right);
    }
}
void BST::recPostOrder(node *ptr)
{
    if(ptr)
    {
        recPostOrder(ptr->left);
        recPostOrder(ptr->right);
        cout<<ptr->item<<" ";
    }
}
void BST::insert(int data)
{
    node *temp=new node;
    temp->item=data;
    temp->left=NULL;
    temp->right=NULL;
    bool flag=false;//if duplicate_ITEM
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        node *ptr=root;
        while(ptr)
        {
            if(ptr->item==data)
                throw DUPLICATE_ITEM;
            else
            {
                if(ptr->item > data)
                {
                    if(ptr->left)
                        ptr=ptr->left;
                    else
                    {
                        ptr->left=temp;
                        flag=true;
                        break;
                    }
                }
                else
                {
                    if(ptr->right)
                        ptr=ptr->right;
                    else
                    {
                        ptr->right=temp;
                        flag=true;
                        break;
                    }
                }
            }
        }    
    }
    if(!flag)
    {
        delete temp[];
    }
}
int main()
{

    return 0;
}