#include<iostream>
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




