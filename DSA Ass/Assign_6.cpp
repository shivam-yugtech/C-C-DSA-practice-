#include<iostream>
using namespace std;

struct node
{
    int iteam;
    node *next;
};

class CLL
{
    private:
        node *last;
    public:
        CLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node*,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CLL();
};
CLL::CLL()
{
    lsat=nullptr;
}
void CLL::insertAtStart(int data)
{
    node *n= new node;
    n->iteam=data;
    if(last==nullptr)
    {
        n->next=n;
        last=n;
    }
    else{
        n->next=last->next;
        last->next=n;
    }
}
void CLL::insertAtLast(int data)
{
    node *n= new node;
    n->iteam=data;
    if(last==nullptr)
    {
        n->next=n;
        last=n;
    }
    else{
        n->next=last->next;
        last->next=n;
        last=n;
    }
}
node* CLL::search(int data)
{   
    if(last==nullptr)
        return nullptr;
    node *temp;
    temp=last->next;
    do
    {
        if(temp->iteam==data)
            return temp;
        temp=temp->next;
    }while(temp!=nullptr) 
    return nullptr;   
}
void CLL::insertAfter(node *temp,int data)
{
    if(temp!=nullptr)
    {
        node *n = new node;
        n->iteam=data;
        n->next=temp->next;
        temp->next=n;
        if(temp==last)
            last=n;
    }
}
void CLL::deleteFirst()
{
    if(last!=nullptr)
    {
        if(last->next==last)
        {
            delete last;
            last=nullptr;
        }
        else{
            node *temp;
            temp=last->next;
            last->next=temp->next;
            delete temp;
        }
    }
}
void CLL::deleteLast()
{
    if(last!=nullptr)
    {
        if(last->next==last)
        {
            delete last;
            last=nullptr;
        }
        else{
            node *temp;
            temp=last->next;
            while(temp->next!=last)
                temp=temp->next;
            temp->next=last->next;
            delete last;
            last=temp;
        }
    }
}
void CLL::deleteNode(int data)
{
    node *r=search(data);
    if(r!=nullptr)
    {
        if(r==last->next)
            deleteFirst();
        else if(r==last)
            deleteLast();
        else
        {
            node *temp;
            temp=last->next;
            while(temp->next!=r)
                temp=temp->next;
            temp->next=r->next;
            delete r;
        }
    }
}
CLL::~CLL()
{   
    while(last!=nullptr)
        deleteFirst();
}