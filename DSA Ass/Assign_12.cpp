#include<iostream>
#define EMPTY_DEQUE 0
using namespace std;
struct node
{
    node *prev;
    int iteam;
    node *next;
};
class Deque
{
    private:
        node *front,*rear;
        int size;
    public:
        Deque();
        void insertFront(int);
        void insertRear(int);
        void deleteFront();
        void deleteRear();
        int getFront();
        int getRear();
        ~Deque();
        bool isEmpty();
        int getSize();
};
Deque::Deque()
{
    front=rear=nullptr;
    size=0;
}
void Deque::insertRear(int data)
{
    node *n = new node;
    n->iteam=data;
    n->prev=rear;
    n->next=nullptr;
    if(rear!=nullptr)
        rear->next=n;
    else
        front=n;
    rear=n;    
    size++;
}
void Deque::insertFront(int data)
{
    node *n = new node;
    n->iteam=data;
    n->prev=nullptr;
    n->next=front;
    if(front!=nullptr)
        front->prev=n;
    else
        rear=n;
    front=n;
    size++;
}
void Deque::deleteFront()
{
    if(front==nullptr)
        throw EMPTY_DEQUE;
    if(front==rear)
    {
        delete front;
        front=rear=nullptr;
    }
    else
    {
        front=front->next;
        delete front->prev;
        front->prev=nullptr;
    }
    size--;
}
void Deque::deleteRear()
{
    if(rear==nullptr)
        throw EMPTY_DEQUE;
    if(front==rear)
    {
        delete rear;
        front=rear=nullptr;
    }
    else
    {
        rear=rear->prev;
        delete rear->next;
        rear->next=nullptr;
    }
    size--;
}
int Deque::getFront()
{
    if(front==nullptr)
        throw EMPTY_DEQUE;
    return front->iteam;
}
int Deque::getRear()
{
    if(rear==nullptr)
        throw EMPTY_DEQUE;
    return rear->iteam;
}
Deque::~Deque()
{
    while(front!=nullptr)
        deleteFront();
}
bool Deque::isEmpty()
{
    return front==nullptr;
}
int Deque::getSize()
{
    return size;
}