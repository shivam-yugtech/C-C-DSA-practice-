#include<iostream>
#include<forward_list>
using namespace std;

int main()
{
    forward_list <int> l1={20,50,80};

    //Implict Iterator
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;

    //Explicit Iterator
    forward_list<int>::iterator it;
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    //Add new element
    l1.push_front(70);
    l1.insert_after(l1.before_begin(),40);

    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;

    //Remove element
    l1.erase_after(l1.begin());
    l1.pop_front();
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;

    l1.sort();
    for(auto x:l1)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}