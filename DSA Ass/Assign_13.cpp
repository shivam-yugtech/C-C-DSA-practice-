#include<iostream>
#define EMPTY_PRIORITY_QUEUE 0
using namespace std;
struct node
{
    int iteam;
    int pno;
    node *next;
};
class PriorityQueue
{
    private:
        node *start;
    public:
        PriorityQueue();
        void insert(int,int);
        void removeHighestPriority();
        int getHighestPriorityElement();
        int getHighestPriorityNumber();
        bool isEmpty();
        ~PriorityQueue();
};
PriorityQueue::PriorityQueue()
{
    start=nullptr;
}
void PriorityQueue::insert(int data,int pno)
{
    node *n = new node;
    n->iteam=data;
    n->pno=pno;
    n->next=nullptr;
    if(isEmpty() || start->pno<pno)
    {
        n->next=start;
        start=n;
    }
    else
    {
        node *temp;
        temp=start;
        while(temp->next!=nullptr)
        {
            if(temp->next->pno < pno)
            {
                n->next=temp->next;
                break;
            }
            temp=temp->next;
        }
        temp->next=n;
    }
}
void PriorityQueue::removeHighestPriority()
{
    if(is_empty())
        throw EMPTY_PRIORITY_QUEUE;
    node *temp;
    temp=start;
    start=start->next;
    delete temp;
}
int PriorityQueue::getHighestPriorityElement()
{
    if(is_empty())
        throw EMPTY_PRIORITY_QUEUE;
    return start->iteam;
}
int PriorityQueue::getHighestPriorityNumber()
{
    if(is_empty())
        throw EMPTY_PRIORITY_QUEUE;
    return start->pno;
}
bool PriorityQueue::isEmpty()
{
    return strat==nullptr;
}
PriorityQueue::~PriorityQueue()
{
    while(!isEmpty())
        removeHighestPriority();
}