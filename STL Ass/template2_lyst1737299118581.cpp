#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5
template <class X>
class Array
{
    private:
        int capacity;
        int lastIndex;
        X *ptr;
    public:
        Array(int);
        void createArray(int);
        bool isEmpty();
        void append(X);
        bool isFull();
        void insert(int,X);
        void edit(int,X);
        void del(int);
        X get(int);
        int count();
        virtual ~Array();
        int find(X);
        
};
template<class X>
Array<X>::Array(int cap)
{
    ptr=nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity=cap;
    lastIndex=-1;
    ptr=new X[capacity];
}
template<class X>
void Array<X>::createArray(int cap)
{
    if(cap<1)
        throw INVALID_CAPACITY;
    if(ptr!=nullptr)
        delete []ptr;
    capacity=cap;
    lastIndex=-1;
    ptr=new X[capacity];
}
template<class X>
bool Array<X>::isEmpty()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex==-1;
}
template<class X>
void Array<X>::append(X data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isFull())
        throw ARRAY_OVERFLOW;
    lastIndex++;
    ptr[lastIndex]=data;
}
template<class X>
bool Array<X>::isFull()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex+1==capacity;
}
template<class X>
void Array<X>::insert(int index,X data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isFull())
        throw ARRAY_OVERFLOW;
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    for(int i=lastIndex;i>=index;i--)
        ptr[i+1]=ptr[i];
    ptr[index]=data;
    lastIndex++;
}
template<class X>
void Array<X>::edit(int index, X newData)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index]=newData;
}
template<class X>
void Array<X>::del(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(isEmpty())
        throw ARRAY_UNDERFLOW;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    for(int i=index+1;i<=lastIndex;i++)
        ptr[i-1]=ptr[i];
    lastIndex--;
}
template<class X>
X Array<X>::get(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}
template<class X>
int Array<X>::count()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return lastIndex+1;
}
template<class X>
Array<X>::~Array()
{
    if(ptr!=nullptr)
        delete []ptr;
}
template<class X>
int Array<X>::find(X data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    for(int i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}
int main()
{
    Array <int> a1(5);
    Array <float> a2(4);
    //Array <Employee> a3(10);
    a1.append(10);
    a1.append(20);
    a1.append(30);
    for(int i=0;i<a1.count();i++)
        cout<<a1.get(i)<<" ";
    cout<<endl;
    a2.append(4.5f);
    a2.append(10.34f);
    a2.append(15.1f);
    for(int i=0;i<a2.count();i++)
        cout<<a2.get(i)<<" ";
    cout<<endl;
    return 0;
}