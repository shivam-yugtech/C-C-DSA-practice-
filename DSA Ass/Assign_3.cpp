#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1
#define DynARRAY_NOT_CREATED 2
#define DynARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define DynARRAY_UNDERFLOW 5

class DynArray
{
    private:
        int capacity;
        int last_index;
        int *ptr;
    protected:
        void doubleArray();
        void halfArray();
    public:
        DynArray();
        DynArray(int); 
        void createArray(int);
        bool isFull();
        bool isEmpty();
        void Append(int cap);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        int find(int);
        virtual ~DynArray();
};
DynArray::DynArray()
{
    capacity=1;
    last_index=-1;
    ptr = new int[capacity];
}
DynArray::DynArray(int cap)
{
    ptr==nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity=cap;
    last_index=-1;
    ptr = new int[capacity];   
}
void DynArray::createArray(int cap)
{
    if(cap<1)
        throw INVALID_CAPACITY;
    if(ptr!=nullptr)
    capacity=cap;
    last_index=-1;
    ptr = new int[capacity];
}
void DynArray::doubleArray()
{
    int *temp = new[capacity*2];
    for(int i=0;i<last_index;i++)
        temp[i]=ptr[i];
    delet []ptr;
    ptr=temp;
    capacity*=2;
}
void DynArray::halfArray()
{
    int *temp = new[capacity/2];
    for(int i=0;i<last_index;i++)
        temp[i]=ptr[i];
    delet []ptr;
    ptr=temp;
    capacity/=2;
}
bool DynArray::isFull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index+1=capacity;
}
bool DynArray::isEmpty()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index=-1;
}
void DynArray::Append(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
     if(is_Full())
        doubleArray();
    last_index++;
    ptr[last_index]=data;
}
void DynArray::insert(int index,int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>last_index+1)
        throw INVALID_INDEX;
    if(is_Full())
        doubleArray();
    for(int i=last_index;i>=index;i--)
        ptr[i+1]=ptr[i];
    ptr[index]=data;
    last_index++;
}
void DynArray::edit(int index,int newdata)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    ptr[index]=newdata;
}
void DynArray::del(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(is_empty())
        throw ARRAY_UNDERFLOW;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    for(int i=index+1,i<last_index;i++)
        ptr[i-1]=ptr[i];
    last_index--;
    if(capacity>1 && (last_index+1 == capacity/2))
        halfArray();
}
int DynArray::get(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    return ptr[index];
}
int  DynArray::count()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index+1;
}
int DynArray::find(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    for(int i=0;i<last_index;i++)
        if(ptr[i]==data)
            return i;
        return -1;
}
DynArray::~DynArray()
{
    if(ptr!=nullptr)
        delete []ptr;
}


