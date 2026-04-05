#include<iostream>
using namespace std;
int main(){
	int i,n,s=0;
	cout<<"Enter a numbers : ";
	cin>>n;
	while(n){
		s+=n%10;
		n=n/10;
	}

cout<<"sum of digits in a number = "<<s;


}
