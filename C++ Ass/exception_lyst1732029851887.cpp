#include<iostream>
#include<string.h>
using namespace std;
void f1()
{
    int age,vote;
    char nationality[50];
    try{
        cout<<"Enter your age: ";
        cin>>age;
        if(age<18)
            throw 1;
        cout<<"Enter your nationality";
        cin.ignore();
        cin.getline(nationality,50);
        if(strcmp(nationality,"INDIAN"))
            throw nationality;
        cout<<"\nVote for your favourite actor: ";
        cout<<"\n1. Amir Khan";
        cout<<"\n2. Shahrukh Khan";
        cout<<"\n3. Salman Khan";
        cout<<"\n4. Akshay Kumar";
        cin>>vote;
        if(vote<1 || vote>4)
            throw 2.5;
        cout<<"\nThank you for your vote";  
    }
    catch(int e){
        if(e==1)
            cout<<"You are not eligible to cast your vote";
    }
    catch(double e){
        if(e==2.5)
            cout<<"Vote Invalidated";
    }
    catch(char *e){
        cout<<"You have to be Indian to cast your vote";
    }
    cout<<"\nEnd of Voting";
}
class BankingException:public exception 
{
    public:
        const char* what() const throw(){
            return "This is my custom error msg";
        }
};
void f2()
{
    int balance=5000,amt;
    cout<<"Enter amount to withdraw";
    cin>>amt;
    if(amt<0)
        throw 3.4;
    if(amt>balance)
        throw *(new BankingException());
    balance-=amt;
    cout<<"New balance is "<<balance;
}

int main()
{
    try{
        f2();
    }
    catch(BankingException &e){
        cout<<e.what();
    }
    catch (...){
        cout<<"Koi to exception hai";
    }
    cout<<endl;
    return 0;
}
