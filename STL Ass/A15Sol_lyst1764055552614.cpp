#include<iostream>
#include<map>
#include<string>
using namespace std;

void Print_Employee(map <int,string>::iterator it)
{
    cout<<it->first<<" "<<it->second<<endl;
}

map<int,bool> Find_Emp(map<int,string> &m1, string name)
{
    map<int,bool> temp = {{0,false}};
    for(auto x : m1)
        if(name == x.second)
        {
            temp.clear();
            temp[x.first] = true;
            break;
        }
    return temp;
}

int main()
{
    map<int, string> m1;
    m1[1] = "Prince Patel";
    m1[2] = "Ram Kumar";
    m1[3] = "Irfan Ali";
    m1[4] = "Md Imran";
    m1[5] = "Sumit Kumar";

    m1.insert(make_pair(6,"Zahid"));

    map <int,string>::iterator it;
    for(it = m1.begin(); it != m1.end(); it++)
        Print_Employee(it);

    map<int ,bool> m2;
    m2 = Find_Emp(m1,"zahid");
    for(auto x : m2)
        cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
