#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Student
{
    private:
        int RollNo;
        string Name;
        string course_name;
    public:
        Student(int r, string n, string cn)
        {
            RollNo = r;
            Name = n;
            course_name = cn;
        }
        Student()   {}
        void setRollNo(int r)   {   RollNo = r;}
        
        void setName(string n)  {   Name = n;}

        void setCourse_Name(string cn){ course_name = cn;}

        int getRollNo() {return RollNo;}

        string getName()    { return Name;}

        string getCourse_Name() { return course_name;}

        void showData()
        {
            cout<<"Name is : "<<Name<<endl;
            cout<<"RollNo is : "<<RollNo<<endl;
            cout<<"Course Name is : "<<course_name<<endl;
        }
};

class RollNo_Rank
{
    public:
        bool operator()(Student s1, Student s2)
        {
            return s1.getRollNo() < s2.getRollNo();
        }
};



int main()
{
    Student s1(10,"Tasin", "B.Tech");
    Student s2(20,"Raja", "M.Tech");
    Student s3(15,"Patel", "Diploma");
    priority_queue <Student, vector<Student>, RollNo_Rank> pq1;
    pq1.push(s1);
    pq1.push(s2);
    pq1.push(s3);
    Student s4 = pq1.top();
    s4.showData();
    return 0;
}
