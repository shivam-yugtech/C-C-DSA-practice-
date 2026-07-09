#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d1={50,40,60,80,10};

    //[]
    for(int i=0;i<d1.size();i++)
        cout<<d1[i]<<" ";
    cout<<endl;

    //at()
    for(int i=0;i<d1.size();i++)
        cout<<d1.at(i)<<" ";
    cout<<endl;
    
    //implicit iterator
    for(auto x : d1)
        cout<<x<<" ";
    cout<<endl;
    
    //Explicit Iterator
    deque<int>::iterator it;
    for(it=d1.begin(); it!=d1.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
    cout<<"_____________________"<<endl;
    
    //Add new element
    d1.push_front(90);
    d1.push_back(70);
    d1.insert(d1.end()-3,30);
    for(auto x : d1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"_____________________"<<endl;

    //delete an element
    d1.pop_front();
    d1.pop_back();
    d1.erase(d1.begin()+1);
    for(auto x : d1)
        cout<<x<<" ";
    cout<<endl;

    return 0;
}