#include<iostream>
using namespace std;

struct node
{
    node *prev;
    int iteam;
    node *next;
};
class DLL
{
    private:
       node *start;
    public:
    DLL();
    void insertAtFirst(int);
    void insertAtLast(int);
    node* search(int);
    void insertAfter(node *,int);
    void deleteFirst();
    void deleteLast();
    void deleteNode(int);
    ~DLL();
};
DLL::DLL()
{
    start=nullptr;
}
void DLL::insertAtFirst(int data)
{
    node *n = new node;
    n->iteam = data;
    n->next = start;
    n->prev = nullptr;
    if(start!=nullptr)
        start->prev=n;
    start=n;
}

void DLL::insertAtLast(int data)
{
    node *n = new node;
    n->iteam = data;
    n->next = nullptr;
    if(start==nullptr)
    {
        n->prev=nullptr;
        start=n;
    }
    else
    {
        node *temp = start;
        while(temp->next != nullptr)
            temp=temp->next;
        n->prev=temp;
        temp->next=n;
    }
}
node* DLL::search(int data)
{
    node *temp=start;
    if(start == nullptr)
        return nullptr;
    while(temp != nullptr)
    {
        if(temp->iteam==data)
            return temp;
        temp=temp->next;
    }
    return nullptr;
}
void DLL::insertAfter(node *temp,int data)
{
    if(temp!=nullptr)
    {
        node *n = new node;
        n->iteam=data;
        n->next=temp->next;
        n->prev=temp;
        if(temp->next!=nullptr)
            temp->next->prev=n
        temp->next=n;
    }
}
void DLL::deleteFirst()
{
    if(start!=nullptr)
    {
        if(start->next==nullptr)
        {
            delete start;
            start=nullptr;
        }
        else{
            start=start->next;
            delete start->prev;
            start->prev=nullptr;
        }
    }
}
void DLL::deleteLast()
{
    if(start!=nullptr)
    {
        if(start->next==nullptr)
        {
            delete start;
            start=nullptr;
        }
        else{
            node *temp;
            temp=start;
            while(temp->next!=nullptr)
                temp=temp->next;
            temp->prev->next=nullptr;
            delete temp;
        }
    }    
}
void DLL::deleteNode(int data)
{
    node* temp=search(data);
    if(temp!=nullptr)
    {
        if(start==temp)
            deleteFirst();
        else if(temp->next==nullptr)
            deleteLast();
        else{
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next
            delete temp;
        }
    }
}
DLL::~DLL()
{
    while(start!=nullptr)
        deleteFirst();
}
  



