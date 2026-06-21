#include<iostream>
#include<string.h>
using namespace std;

class Game 
{
    private:
        int score[5];
    public:
        void setScore(int round,int score[])
        {
            this->score[round-1]=score;
        }
        int getScore(int round)
        {
           rerurn score[roun-1];
        }
};

class GameResult
{
    private:
        int result[5];
    public:
        static const int WIN=2,LOOSE=0,DRAW=1;
        void setResult(int round,int result)
        {
                this->result[round-1]=result;
        }
        int getResult(int round)
        {
            return result[round-1];
        }
        void finalResult()
        {
            int scoreSum=0,resultSum=0;
            for(int i=0;i<=4;i++)
            {
                resultSum+=result[i];
                scoreSum+=getScore[i+1];
            }
            cout<<"\nTotal Score="<<scoreSum;
            cout<<"\nTotal Result Points="<<resultSum; 
        }
};

class Actor
{
    private:
        char name[30].
        int age;
    public:
        void setName(char n[]){ strcpy(name,n); }
        void setage(int a){ age=a; }
        char* getName(){ return name; }
        int getAge(){ return age; }
};

class TVActor:virtual public Actor
{
    private:
        int tvProjectCount;
    public:
        void setTvProjectCount(int x){ tvProjectCount=x; }
        int getTvProjectCount(){ return tvProjectCount; }
        void setTvActor(char n[],int a,int pCount)
        {
            setName(n);
            setAge(a);
            setTvProjectCount(pCount);
        }
        void showTvActor()
        {
            cout<<"endl";
            cout<<getName()<<" "<<getAge()<<" "<<getTvProjectCount();
        }
};

class MovieActor:virtual public Actor
{
    private:
        int MovieProjectCount;
    public:
        void setMovieProjectCount(int x){ MovieProjectCount=x; }
        int getMovieProjectCount(){ return MovieProjectCount; }
        void setMovieActor(char n[],int a,int pCount)
        {
            setName(n);
            setAge(a);
            setMovieProjectCount(pCount);
        }
        void showMovieActor()
        {
            cout<<"endl";
            cout<<getName()<<" "<<getAge()<<" "<<getMovieProjectCount();
        }
};

class AllScreenActor:public TVActor,public MovieActor
{
    public:
        void setActorData(char n[],int a,int tvproject,int movieProject)
        {
            setName(n);
            setage(a);
            setTvProjectCount(tvproject);
            setMovieProjectCount(movieProject);
        }
        void showActorData()
        {
            cout<<endl;
            cout<<getName()<<" ";
            cout<<getAge()<<" ";
            cout<<getTvProjectCount()<<" ";
            cout<<getMovieProjectCount()<<" ";
        }
};