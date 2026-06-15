#include<iostream>
using namespace std;

f1()
{
    int a,b,c;
    float avg;
    cout<<"Enter 3 number: ";
    cin>>a>>b>>c;
    avg=(a+b+c)/3.0;
    cout<<"Average of 3 number are "<<avg;
}
f2()
{
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Square of "<<n<<" is "<<n*n;
}
f3()
{
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"value After swap is "<<x<<" & "<<y;
}
f4()
{
    int x,y,max;
    cout<<"Enter two number: ";
    cin>>x>>y;
    max=x>y?x:y;
    cout<<"Maximum is "<<max;
}
f5()
{
    cout<<"Sum of all the members in Array is : ";
    int sum=0,i;
    int arr[] = {23,45,34,64,86,84,36,32,11,9};
    for(i=0;i<=9;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum;
}
int main()
{
    f5();
    cout<<endl;
}