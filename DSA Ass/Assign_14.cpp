#include<iostream>
#define EMPTY_TREE 0
using namespace std;
struct node
{
    node *left;
    int iteam;
    node *right;
};
class BST
{
    private:
        node *root;
    protected:
        void preorderRec(node *);
        void inorderRec(node *);
        void postorderRec(node *);
        node* deleteNode(node *,int);
    public:
        BST();
        bool isEmpty();
        void insert(int);
        void preorder();
        void inorder();
        void postorder();
        void del(int);
        node* search(int);
        ~BST();
};
BST::BST()
{
    root=nullptr;
}
bool BST::isEmpty()
{
    return root==nullptr;
}
void BST::insert(int data)
{
    node *ptr;
    node *n = new node;
    n->iteam=data;
    n->left=nullptr;
    n->right=nullptr;
    if(is_empty())
        root=n;
    else
    {
        ptr=root;
        while(ptr->iteam!=data)
        {
            if(data < ptr->iteam)
            { // Left Subtree
                if(ptr->left!=nullptr)
                    ptr=ptr->left;
                else
                {
                    ptr->left=n;
                    break;
                }
            }
            else
            { // Right Subtree
                if(ptr->right!=nullptr)
                    ptr=ptr->right;
                else
                {
                    ptr->right=n;
                    break;
                }
            }
        }
        if(ptr->iteam==data)
            delete n;
    }
}
void BST::preorder()
{
    preorderRec(root);
}
void BST::preorderRec(node *ptr)
{
    if(ptr!=nullptr)
    {
        cout<<" "<<ptr->iteam;
        preorderRec(ptr->left);
        preorderRec(ptr->right);
    }
}
void BST::inorder()
{
    inorderRec(root);
}
void BST::inorderRec(node *ptr)
{
    if(ptr!=nullptr)
    {
        inorderRec(ptr->left);
        cout<<" "<<ptr->iteam;
        inorderRec(ptr->right);
    }
}
void BST::postorder()
{
    postorderRec(root);
}
void BST::postorderRec(node *ptr)
{
    if(ptr!=nullptr)
    {
        postorderRec(ptr->left);
        postorderRec(ptr->right);
        cout<<" "<<ptr->iteam;
    }
}
node* BST::search(int data)
{
    node *temp;
    temp=root;
    while(temp!=nullptr)
    {
        if(temp->iteam==data)
            return temp;
        if(data<temp->iteam)
            temp=temp->left;
        else
            temp=temp->right;
    }
    return temp;
}
void BST::del(int data)
{
     root=deleteNode(root,data);    
}
node* BST::deleteNode(node *ptr,int data)
{
    if(ptr==nullptr)
        return ptr;
    if(data < ptr->iteam)
        ptr->left=deleteNode(ptr->left,data);
    else if(data > ptr->iteam)
        ptr->right=deleteNode(ptr->right,data);
    else
    {  //node found
        
        //no Child
        if(ptr->left==nullptr && ptr->right==nullptr)
        {
            delete ptr;
            return nullptr;
        }
        //Single Child
        if(ptr->left==nullptr || ptr->right==nullptr)
        {
            node *child=ptr->left!=nullptr?ptr->left:ptr->right;
            delete ptr;
            return child;
        }
        //Two Child
        node *pred, *parpred;
        parpred=ptr;
        pred=ptr->left;
        while(pred->right!=nullptr)
        {
            parpred=pred;
            pred=pred->right;
        }
        ptr->iteam=pred->iteam;
        if(parpred->right==pred) //pred is right child of parpred
            parpred->right=deleteNode(pred,pred->iteam);
        else
            parpred->left=deleteNode(pred,pred->iteam);
    }
    return ptr;
}
BST::~BST()
{
    while(root!=nullptr)
        del(root->iteam);
}