#include<iostream>
using namespace std;
struct node
{
    node *prev;
    int item;
    node *next;
};
class CDLL
{
    private:
        node *start;
    public:
        CDLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int );
        void insertAfter(node*, int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~CDLL();
};
 CDLL::CDLL()
 {
    start=nullptr;
 }
void CDLL::insertAtStart(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
        start=n;
    }
}
void CDLL::insertAtLast(int data)
{
    node *n=new node;
    n->item=data;
    if(start==nullptr)
    {
        n->prev=n;
        n->next=n;
        start=n;
    }
    else
    {
        n->prev=start->prev;
        n->next=start;
        start->prev->next=n;
        start->prev=n;
    }
}
node* CDLL::search(int data)
{
    if(start==nullptr)
        return nullptr;
    node *temp;
    temp=start;
    do
    {
        if(temp->item==data)
            return temp;
        temp=temp->next;
    }while(temp!=start);
    return nullptr;
}
void CDLL::insertAfter(node* temp, int data)
{
    if(temp!=nullptr)
    {
        node* n=new node;
        n->item=data;
        n->next=temp->next;
        n->prev=temp;
        temp->next->prev=n;
        temp->next=n;
    }
}
void CDLL::deleteFirst()
{
    if(start!=nullptr)
    {
        if(start->next==start)
        {
            delete start;
            start=nullptr;
        }
        else
        {
            start->next->prev=start->prev;
            start->prev->next=start->next;
            node* t=start;
            start=start->next;
            delete t;
        }
    }
}
void CDLL::deleteLast()
{
    if(start!=nullptr)
    {
        if(start->next==start)
        {
            delete start;
            start=nullptr;
        }
        else
        {
            node* t=start->prev;
            t->prev->next=start;
            start->prev=t->prev;
            delete t;
        }
    }
}
void CDLL::deleteNode(int data)
{
    node *t=search(data);
    if(t!=nullptr)
    {
        if(t==start)
            deleteFirst();
        else
        {
            t->next->prev=t->prev;
            t->prev->next=t->next;
            delete t;
        }
    }
}
CDLL::~CDLL()
{
    while(start!=nullptr)
        deleteFirst();
}
