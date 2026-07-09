#include<iostream>
#include<list>
#include<vector>
using namespace std;

void p1()
{
    list <string> l1={"choudhary","shivam","kumar","sanjeev"};
    list <string>::reverse_iterator rit;
    for(rit=l1.rbegin();rit!=l1.rend();rit++)
        cout<<*rit<<" ";
}
int main()
{
    p1();
    cout<<endl;
    return 0;
}