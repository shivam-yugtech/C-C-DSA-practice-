#include<iostream>
#include<fstream>
using namespace std;
void writing()
{
    char str[]="MySirG";
    ofstream fout;
    fout.open("file1.txt",ios::out);
    fout<<str;
    fout.close();
}
void append()
{
    char str[]=" Education Services Private Limited";
    ofstream fout;
    fout.open("file1.txt",ios::app);
    fout<<str;
    fout.close();
}
void reading()
{
    char ch;
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin) //fin.operator!()
    {
        cout<<"File not found";
    }
    else
    {
        cout<<"File1.txt"<<endl;
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
}
class Employee
{
    private:
        int empid;
        char name[30];
        double salary;
    public:
        void setEmployee(int id,char n[],double s)
        {
            empid=id;
            strcpy(name,n);
            salary=s;
        }
        void showEmployee()
        {
            cout<<empid<<" "<<name<<"  "<<salary<<endl;
        }
        void save(char filename[])
        {
            ofstream fout;
            fout.open(filename,ios::app);
            fout.write((char*)this,sizeof(*this));
            fout.close();
        }
        void viewAllEmployees(char filename[])
        {
            ifstream fin;
            fin.open(filename,ios::in);
            if(!fin)
                cout<<"File not found";
            else
            {
                fin.read((char*)this,sizeof(*this));
                while(!fin.eof())
                {
                    showEmployee();
                    fin.read((char*)this,sizeof(*this));
                }
            }
            fin.close();
        }
};
int main()
{
    char ch;
    ifstream fin;
    fin.open("file1.txt");
    
    fin.seekg(5);
    cout<<fin.tellg();
    fin>>ch;
    cout<<endl<<ch;
    cout<<endl;
    fin.close();
    /*
    Employee emp;
    emp.setEmployee(2,"Balveer",45000);
    emp.save("empfile.txt");
    emp.viewAllEmployees("empfile.txt");
    */
    cout<<endl;
    return 0;
}