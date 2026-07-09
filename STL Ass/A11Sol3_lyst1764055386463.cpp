#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Batsman
{
    private:
        string Name;
        int runs,hundreds, fifties;
    public:
        Batsman(string n, int r, int h, int f)
        {
            Name = n;
            runs = r;
            hundreds = h;
            fifties = f;
        }

        string getName()    {   return Name;}
        int getRuns()   {   return runs;}
        int getHundreds()   {   return hundreds;}
        int getFifties()    {   return fifties;}

        void showData()
        {
            cout<<"Name is : "<<Name<<endl;
            cout<<"Runs is : "<<runs<<endl;
            cout<<"Hundreds is : "<<hundreds<<endl;
            cout<<"Fifties is : "<<fifties<<endl;
        }
};
class Runs_Rank
{
    public:
        bool operator()(Batsman &b1, Batsman &b2)
        {
            return b1.getRuns() < b2.getRuns();
        }
};

int main()
{
    Batsman b1("Ram Kumar", 140, 1,2);
    Batsman b2("Patel Kumar", 215, 2,4);
    Batsman b3("Imran", 180, 1,3);
    priority_queue <Batsman, vector<Batsman>, Runs_Rank> pq1;
    pq1.push(b1);
    pq1.push(b2);
    pq1.push(b3);
    Batsman b4 = pq1.top();
    b4.showData();
    return 0;
}
