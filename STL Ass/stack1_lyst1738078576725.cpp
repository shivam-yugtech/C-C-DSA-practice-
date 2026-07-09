#include<iostream>
#include<stack>
#include<list>
using namespace std;

int main()
{
    stack<int,list<int>> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    cout<<s1.top()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    if(!s1.empty())
        cout<<s1.top()<<endl;
    else
        cout<<"Stack is empty";

    cout<<endl;
    return 0;
}
