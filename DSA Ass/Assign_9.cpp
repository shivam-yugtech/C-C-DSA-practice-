#include<iostream>
using namespace std;
#define STACK_UNDERFLOW 3
struct node
{
    int item;
    node* next;
};
class Stack
{
    private:
        node *top;
    public:
        Stack();
        void push(int); 
        int peek();
        void pop();
        ~Stack();
        bool isEmpty();
        
        
};
Stack::Stack()
{
    top=nullptr;
}
void Stack::push(int data)
{
    node *n=new node;
    n->item=data;
    n->next=top;
    top=n;
}
int Stack::peek()
{
    if(top==nullptr)
        throw STACK_UNDERFLOW;
    return top->item;
}
void Stack::pop()
{
    if(top==nullptr)
        throw STACK_UNDERFLOW;
    node *temp;
    temp=top;
    top=top->next;
    delete temp;
}
Stack::~Stack()
{
    while(top!=nullptr)
        pop();
}
bool Stack::isEmpty()
{
    return top==nullptr;
}
void reverseStack(Stack &s1)
{
    Stack s2,s3;
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
int countDigits(int num)
{
    int count=0;
    while(num)
    {
        num/=10;
        count++;
    }
    return count;
}
bool isPalindrome(int num)
{
    Stack s1;
    int n=countDigits(num);
    
    int i=1;
    while(i<=n/2)
    {
        s1.push(num%10);
        num/=10;
        i++;
    }
    if(n%2)
        num/=10;
    while(!s1.isEmpty())
    {
        if(s1.peek()!=num%10)
            return false;
        s1.pop();
        num/=10;
    }
    return true;
    
    
}


