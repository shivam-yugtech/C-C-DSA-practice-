#include<iostream>
#define EMPTY_QUEUE 0
using namespace std;

struct node
{
    int iteam;
    node *next;
};

class Queue
{
    private:
        node *front;
        node *rear;
        int size;
    public:
        Queue();
        void insert(int);
        int getRear();
        int getFront();
        void del();
        ~Queue();
        int getSize();
};
Queue::Queue()
{
    front=nullptr;
    rear=nullptr;
    size=0;
}
void Queue::insert(int data)
{
    node *n = new node;
    n->iteam=data;
    n->next=nullptr;
    if(rear==nullptr)
    {
        front=n;
        rear=n;
    }
    else
    {
        rear->next=n;
        rear=n;
    }
    size++;
}
int Queue::getRear()
{
    if(rear==nullptr)
        throw EMPTY_QUEUE;
    return rear->iteam;
}
int Queue::getFront()
{
    if(front==nullptr)
        throw EMPTY_QUEUE;
    return front->iteam;
}
void Queue::del()
{
    node *t;
    if(front==nullptr)
        throw EMPTY_QUEUE;
    if(rear==front)
    {
        delete front;
        rear=front=nullptr;
    }
    else
    {
        t=front;
        front=front->next;
        delete t;
    }
    size--;
}
Queue::~Queue()
{
    while(front!=nullptr)
        del();
}
int Queue::getSize()
{
    return size;
}