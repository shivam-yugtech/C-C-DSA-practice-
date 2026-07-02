#include<iostream>
using namespace std;

struct node
{
    int iteam;
    int vertex;
    node *next;
};
class AdjList
{
    private:
        node *start;
        int vertex;
    public:
        AdjList();
        AdjList(int);
        node* getStart();
        void setVertex(int);
        void addNode(int,int);
        void removeFirstNode();
        void printList();
        ~AdjList();
};
AdjList::AdjList()
{
    start=nullptr;
}
AdjList::AdjList(int v)
{
    start=nullptr;
    vertex=v;
}
node* AdjList::getStart()
{
    return start;
}
void AdjList::setVertex(int v)
{
    vertex=v;
}
void AdjList::addNode(int v,int data)
{
    node *n = new node;
    n->iteam=data;
    n->vertex=v;
    n->next=start;
    start=n;
}
void AdjList::removeFirstNode()
{
    node *r;
    if(start)
    {
        r=start;
        start=start->next;
        delete r;
    }
}
void AdjList::printList()
{
    node *t;
    t=start;
    while(t)
    {
        cout<<" ("<<t<<vertex<<","<<t->iteam<<") ";
        t=t->next;
    }
}
AdjList::~AdjList()
{
    while(start)
        removeFirstNode();
}

class Graph
{
    private:
        int v_count;
        AdjList *arr;
    public:
        Graph();
        int getVCount();
        void createGraph(int);
        void printGraph();
        ~Graph();
};
Graph::Graph()
{
    v_count=0;
    arr=nullptr;
}
int Graph::getVCount()
{
    return v_count;
}
void Graph::createGraph(int vno)
{
    int n,v,data;
    v_count=vno;
    arr=new AdjList[v_count];
    for(int i=0;i<v_count;i++)
    {
        arr[i].setVertex[i];
        cout<<"\nHow many adjacent nodes of V"<<i<<":";
        cin>>n;
        for(int j=0;j<n;j++)
        {
            cout<<"\nEnter vertex number:";
            cin>>v;
            data=10;
            arr[i].addNode(v,data);
        }
    }
}
void Graph::printGraph()
{
    for(int i=0;i<v_count;i++)
    {
        cout<<endl;
        arr[i].printList();
    }
}
Graph::~Graph()
{
    delete []arr;
}