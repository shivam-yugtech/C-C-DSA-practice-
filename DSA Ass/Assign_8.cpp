#include<iostream>
using namespace std;
#define INVALID_STACK 0
#define INVALID_CAPACITY 1
#define STACK_OVERFLOW 2
#define STACK_UNDERFLOW 3
class Stack
{
    private:
        int capacity;
        int top;
        int *ptr;
    public:
        Stack(int);
        void push(int);
        int peek();
        void pop();
        bool isFull();
        bool isEmpty();
        ~Stack();
        int getCapacity();
};
Stack::Stack(int cap)
{
    ptr=nullptr;
    if(cap<1)
        throw INVALID_CAPACITY;
    capacity=cap;
    top=-1;
    ptr=new int[cap];
}
void Stack::push(int data)
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    if(isFull())
        throw STACK_OVERFLOW;
    top++;
    ptr[top]=data;
}
int Stack::peek()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    if(isEmpty())
        throw STACK_UNDERFLOW;
    return ptr[top];
}
void Stack:: pop()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    if(isEmpty())
        throw STACK_UNDERFLOW;
    top--;
}
bool Stack::isFull()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    return top+1==capacity;
}
bool Stack::isEmpty()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    return top==-1;
}
Stack::~Stack()
{
    delete []ptr;
}
int Stack::getCapacity()
{
    if(ptr==nullptr)
        throw INVALID_STACK;
    return capacity;
}
void reverse(Stack &s1)
{
    try{
        Stack s2(s1.getCapacity()),s3(s1.getCapacity());
        while(!s1.isEmpty())
        {
            s2.push(s1.peek());
            s1.pop();
        }
        while(!s2.isEmpty())
        {
            s3.push(s2.peek());
            s2.pop();
        }
        while(!s3.isEmpty())
        {
            s1.push(s3.peek());
            s3.pop();
        }
    }
    catch(int e)
    {
        switch(e)
        {
            case INVALID_STACK:
                cout<<"Stack is not a valid Stack";
                break;
            case INVALID_CAPACITY:
                cout<<"Stack cannot be initialized with invalid capacity";
                break;
            case STACK_OVERFLOW:
                cout<<"Stack is full";
                break;
            case STACK_UNDERFLOW:
                cout<<"Stack is Empty";
                break;
            default:
                cout<<"Invalid Stack Operation";
        }
    }

}
class SuperStack
{
    private:
        Stack *sptr1,*sptr2;
    public:
        SuperStack(int cap)
        {
            sptr1=new Stack(cap);
            sptr2=new Stack(cap);
        }
        void push(int data)
        {
            sptr1->push(data);
            if(sptr2->isEmpty())
                sptr2->push(data);
            else
                if(sptr2->peek()>data)
                    sptr2->push(data);
                else
                    sptr2->push(sptr2->peek());
        }
        void pop()
        {
            sptr1->pop();
            sptr2->pop();
        }
        int getMinimum()
        {
            return sptr2->peek();
        }
};
int main()
{
    SuperStack s1(6);
    s1.push(20);
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.push(30);
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.push(10);
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.push(40);
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.pop();
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.pop();
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    s1.pop();
    cout<<"Minimum: "<<s1.getMinimum()<<endl;
    return 0;
}