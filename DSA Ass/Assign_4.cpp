#include<iostream>
#define LINK_LIST_UNDERFLOW;
using namespace std;

struct node
{
    int iteam;
    int *next;
};

class SLL
{
    private:
        int *start;
    public:
        SLL();
        void insertAtStart(int);
        void insertAtLast(int);
        node* search(int);
        void insertAfter(node *,int);
        void deleteFirst();
        void deleteLast();
        void deleteNode(int);
        ~SLL();
};
SLL::SLL()
{
    start=nullptr;
}
void SLL::insertAtStart(int data)
{
    node *n = new node;
    n->iteam=data;
    n->next=start;
    start=n;
}
void SLL::insertAtLast(int data)
{
    node *n = new node;
    n->iteam=data;
    n->next=nullptr;
    if(start==nullptr)
        start=n;
    else{
        node *temp = start;
        while(temp->next != nullptr)
            temp=temp->next;
        temp->next=n;
    }
}
node* SLL::search(int data)
{
    if(start==nullptr)
        return nullptr;
    node *temp = start;
    while(temp!=nullptr){
        if(temp->next==data)
            return temp;
        temp=temp->next;
    }
    return nullptr;    
}
void SLL::insertAfter(node *t,int data)
{
    if(t != nullptr)
    {                     // list.insertAfter(list.search(20),50);
        node *n = new node;
        n->iteam=data;
        n->next=t->next;
        t->next=n;
    }
}
void SLL::deleteFirst()
{
     if(start != nullptr)
     {      // throw LINK_LIST_UNDERFLOW;
        node *temp = start;
        start=start->next;
        delet temp; 
     }
}
void SLL::deleteLast()
{
    if(start->next == nullptr){
        delete start;
        start = nullptr;
    }
    else{
        node *temp=start;
        while(temp->next->next!=nullptr)
        {
            temp=temp->next;
        }
        delete temp->next;
        temp->next=nullptr;
    }
}
void SLL::deleteNode(int data)
{
    if(start != nullptr)
        throw LINK_LIST_UNDERFLOW;
    node *t1,*t2;
    t1=start;
    t2=nullptr;
    while(t1!=nullptr)
    {
        if(t1->next==data)
            break;
        t2=t1;
        t1=t1->next;
    }
    if(t2==nullptr)
        deleteFirst();
    if(t1!=nullptr)
    {
        t2->next=t1->next;
        delete t1;
    }
}
SLL::~SLL()
{
    while(start!=nullptr)
        deleteFirst();
}

