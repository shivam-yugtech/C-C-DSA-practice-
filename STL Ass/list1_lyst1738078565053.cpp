#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l1={30,50,10,40,80,60};
    
    //Implicit Iterator
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    //Explicit Iterator
    list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    list<int>::reverse_iterator rit;
    for(rit=l1.rbegin();rit!=l1.rend();rit++)
        cout<<*rit<<" ";
    cout<<endl;
    cout<<"---------------------------"<<endl;
    cout<<l1.back()<<" "<<l1.front()<<endl;
    cout<<l1.empty()<<endl;
    cout<<l1.size()<<endl;
    cout<<"---------------------------"<<endl;
    //Add new element
    l1.push_back(90);
    l1.push_front(100);
    it=l1.begin();
    it++;
    it++;
    it++;
    l1.insert(it,70);
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"---------------------------"<<endl;
    //delete an element
    l1.pop_front();
    l1.pop_back();

    l1.remove(10);
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    l1.reverse();
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    
    return 0;
}