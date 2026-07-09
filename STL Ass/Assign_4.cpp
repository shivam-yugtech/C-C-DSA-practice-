#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

void p1()
{
    vector <int> v1={23,45,67,89,10};
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;
}
void p2()
{
    vector <float> v1={12.3f,34.5f,56.7f,78.9f,6.4f};
    for(int i=0;i<v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;
}
void p3()
{
    vector <string> v1={"shivam","kumar","choudhary","begusarai","nagpur"};
    for(auto x:v1)
        cout<<x<<" ";
    cout<<endl;
}
void p4()
{
    vector <int> v1={23,45,6,7,89,17};
    vector <int>::iterator it;
    for(it=v1.begin();it!=v1.end();it++)
        cout<<*it<<" ";
}
vector<int> p5()
{
    vector <int> v1={23,45,6,7,89,17,67};
    vector <int> v2;
    vector<int>::iterator it;
    for(it=v1.begin()+1;it!=v1.end()-1;it++)
    {
        if(*it < *(it-1) && *it < *(it+1))
            v2.push_back(*it);
    }
    return v2;
}
int main()
{   
    vector <int> v3;
    v3=p5();
    for(auto x:v3)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}