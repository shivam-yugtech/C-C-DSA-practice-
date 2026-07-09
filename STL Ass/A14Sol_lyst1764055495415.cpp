#include<iostream>
#include<set>
#include<vector>
using namespace std;


class Score
{
    private:
        int runs, wickets;
    public:
        Score(int r,int w):runs(r),wickets(w)   {}

        int getRuns()   {   return runs;}

        int getWickets()    {   return wickets;}

        void Display_Runs()
        {
            cout<<"Runs : "<<runs<<", Wickets : "<<wickets<<endl;
        }

        void Display_Wickets()
        {
            cout<<"Wickets : "<<wickets<<", Runs : "<<runs<<endl;
        }
};

class Runs_Rank
{
    public:
        bool operator()(Score &s1,Score &s2)
        {
            return (s1.getRuns() < s2.getRuns());
        }
};

class Wickets_Rank
{
    public:
        bool operator()(Score &s1,Score &s2)
        {
            return (s1.getWickets() < s2.getWickets());
        }
};
