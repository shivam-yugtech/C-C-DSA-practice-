#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v1;
    vector <int> v2={30,20,40,10,60};

    //[]
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;

    //at()
    for(int i=0;i<v2.size();i++)
        cout<<v2.at(i)<<" ";
    cout<<endl;

    //Implicit Iterator
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;

    //Explicit Iterator
    vector<int>::iterator it;
    for(it=v2.begin();it!=v2.end();it++)
        cout<<*it<<" ";
    cout<<endl;

    cout<<v1.empty()<<endl;
    cout<<v2.capacity()<<"  "<<v2.size()<<endl;
    cout<<v2.front()<<"  "<<v2.back()<<endl;
    cout<<"-------------------------"<<endl;
    //How to add elements in the vector?
    v2.push_back(80);
    v2.insert(v2.begin()+2,90);
    v2.insert(v2.begin()+3,4,50); //insert 50 4 times after 3 elements
    v2.insert(v2.end()-2,{11,22,33});
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;
    v1.insert(v1.begin(),v2.begin()+1,v2.begin()+4);
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
    cout<<"-------------------------"<<endl;
    //How to delete element or elements?
    v2.erase(v2.begin()+2);
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;
    v2.erase(v2.begin()+2,v2.begin()+4);
    for(auto x:v2)
        cout<<x<<" ";
    cout<<endl;
    v2.pop_back(); //deletes last element
    v2.pop_back();
    //v2.clear(); //it deletes all the elements of vector
    cout<<v2.capacity()<<"  "<<v2.size()<<endl;
    v2.shrink_to_fit();
    cout<<v2.capacity()<<"  "<<v2.size()<<endl;

    return 0;
}