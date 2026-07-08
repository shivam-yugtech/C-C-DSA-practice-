#include<iostream>
#include<array>
using namespace std;

int main()
{
    array <int,5> a1;
    array <float,3> a2={10.3f,12.4f,9.5f};
    array <float,3> a3=a2;

    // []
    for(int i=0;i<=2;i++)
        cout<<a2[i]<<" ";
    cout<<endl;

    //at()
    for(int i=0;i<=2;i++)
        cout<<a2.at(i)<<" ";
    cout<<endl;
    //Handling Exception for Invalid index
    try{
        cout<<a2.at(3);
    }
    catch(out_of_range e){
        cout<<e.what()<<endl;
    }

    //Implicit Iterator | range-for-loop
    for(float x:a2){
        x++;
        cout<<x<<" ";
    }
    cout<<endl;

    //In the above code, x gets a copy of element and not
    //reference, so there will be no change in array 
    //elements
    for(auto x:a2){
        cout<<x<<" ";
    }
    cout<<endl;
    /* 
    //range for loop can work on normal arrays as well
    int arr[]={10,20,30,40,50};
    for(int x:arr)
        cout<<x<<" ";
    cout<<endl;
    */
    //Explict Iterator
    array<float,3>::iterator it;
    for(it=a2.begin();it!=a2.end();it++)
        (*it)--;
        //cout<<*it<<" ";
    cout<<endl;

    //printing in reverse order
    for(it=a2.end()-1;it!=a2.begin()-1;it--)
        cout<<*it<<" ";
    cout<<endl;
    //better way to access elements in reverse order
    array<float,3>::reverse_iterator rit;
    for(rit=a2.rbegin();rit!=a2.rend();rit++)
        cout<<*rit<<" ";
    cout<<endl;

    //methods of array class
    cout<<"Last Element: "<<a2.back()<<endl;
    cout<<"First Element: "<<a2.front()<<endl;
    cout<<"Is a1 empty? "<<a1.empty()<<endl;
    cout<<*a2.data()<<endl;
    cout<<a1.size()<<endl;
    // for(auto x: a1)
    //     cout<<x<<" ";
    // cout<<endl;

    return 0;
}