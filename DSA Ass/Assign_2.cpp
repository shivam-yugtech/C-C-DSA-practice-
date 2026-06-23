#include<iostream>
using namespace std;
#define INVALID_CAPACITY 1
#define ARRAY_NOT_CREATED 2
#define ARRAY_OVERFLOW 3
#define INVALID_INDEX 4
#define ARRAY_UNDERFLOW 5
#define NULL_POINTER_ERROR 6
class Array
{
    private:
        int capacity,last_index;
        int *ptr;
    public:
        Array(int);
        Array(Array &);   // deep copy
        Array& operator=(Array &);   // deep copy
        void create_Array(int); 
        bool is_empty();
        void Append(int);
        bool is_Full();
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        virtual ~Array();
        int find(int);
        
};
Array::Array(int cap)
{
    ptr=nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity=cap;
    last_index=-1;
    ptr = new int[capacity];
}
Array::Array(Array &arr)  // deep copy
{
    capacity=arr.capacity;
    last_index=arr.last_index;
    if(arr.ptr=nullptr)
        ptr=nullptr;
    else{
        ptr=new int[capacity];
        for(int i=0;i<arr.last_index;i++)
            ptr[i]=arr.ptr[i];
    }
}
Array& Array::operator=(Array &arr)   // deep copy
{
    if(this != &arr){
        if(arr.ptr = nullptr)
        {
            throw NULL_POINTER_ERROR;
        }
        if(ptr != nullptr)
        {
            delete []ptr;
            ptr=nullptr;
        }
        capacity=arr.capacity;
        last_index=arr.last_index;
        ptr = new int[capacity];
        for(int i=0;i<arr.last_index;i++)
            ptr[i]=arr.ptr[i];
    } 
    return *this;
}
void Array::create_Array(int cap)
{
    if(cap<1)
            throw INVALID_CAPACITY;
        if(ptr!=nullptr)
        capacity=cap;
        last_index=-1;
        ptr = new int[capacity];
    /*
    if(ptr==nullptr)
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        capacity=cap;
        last_index=-1;
        ptr = new int[capacity];
    }
    else
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        delete []ptr;   
        capacity=cap;
        last_index=-1;
        ptr = new int[capacity];
    }
    */
}
bool Array::is_empty()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index=-1;
}
void Array::Append(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
     if(is_Full())
        throw ARRAY_OVERFLOW;
    last_index++;
    ptr[last_index]=data; 
}
bool Array::is_Full()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index+1=capacity;
}
void Array::insert(int index,int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(is_Full())
        throw ARRAY_OVERFLOW;
    if(index<0 || index>last_index+1)
        throw INVALID_INDEX;
    for(int i=last_index;i>=index;i--)
        ptr[i+1]=ptr[i];
    ptr[index]=data;
    last_index++;
}
void Array::edit(int index,int newdata)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    ptr[index]=newdata;
}
void Array::del(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(is_empty())
        throw ARRAY_UNDERFLOW;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    for(i=index+1;i<last_index;i++)
        ptr[i-1]=ptr[i];
    last_index--;
}
int Array::get(int index)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    if(index<0 || index>last_index)
        throw INVALID_INDEX;
    return ptr[index];
}
int Array::count()
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    return last_index+1;
}
Array::~Array()
{
    if(ptr!=nullptr)
        delete []ptr;
}
int Array::find(int data)
{
    if(ptr==nullptr)
        throw ARRAY_NOT_CREATED;
    for(int i=0;i<last_index;i++)
        if(ptr[i]==data)
            return i;
        return -1;
    
}

