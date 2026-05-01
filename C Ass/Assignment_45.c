#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct students {
    int rollnum;
    char name[30];
    int class;
};

struct students input_students_data()
{
    struct students s;
    printf("Enter student Roll, name, class");
        scanf("%d",&s.rollnum);
        fflush(stdin);
        fgets(s.name,30,stdin);
        s.name[strlen(s.name)-1]='\0';
        scanf("%d",&s.class);
    return s;
}
void dispaly_student_data(struct students s)
{
        printf("\n%d %s %d ",s.rollnum,s.name,s.class);
}
void inputNStudent(struct students s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        s[i]=input_students_data();
}
void displayNStudents(struct students s[],int n)
{
    int i;
    for(i=0;i<n;i++)
        dispaly_student_data(s[i]);
}
void f2()
{
    struct students stud[4];
    inputNStudent(stud,4);
    displayNStudents(stud,4);
}
void f3()
{
    int n;
    struct students *ptr;
    printf("How Many Student Record You Want To store ?");
    scanf("%d",&n);
    ptr=(struct students*)calloc(n,sizeof(struct students));
    inputNStudent(ptr,n);
    displayNStudents(ptr,n);
}

struct Marks {
    int rollnum;
    char name[30];
    int chem_marks;
    int phy_marks;
    int maths_marks;
};

struct Marks inputStudentMarks()
{
    struct Marks m;
    printf("Enter student Roll, name, chem_marks,phy_marks,maths_marks");
        scanf("%d",&m.rollnum);
        fflush(stdin);
        fgets(m.name,30,stdin);
        m.name[strlen(m.name)-1]='\0';
        scanf("%d",&m.chem_marks);
        scanf("%d",&m.phy_marks);
        scanf("%d",&m.maths_marks);
    return m;
}
void inputNStudentMarks(struct Marks m[],int n)
{
    int i;
    for(i=0;i<n;i++)
        m[i]=inputStudentMarks();
}   

float percentage(struct Marks m)
{
    return (m.chem_marks + m.maths_marks + m.phy_marks)/3.0;
}
void displayMarks(struct Marks m[],int n)
{
    int i;
    for(i=0;i<=4;i++)
        printf("\n%d %s %f",m[i].rollnum,m[i].name,percentage(m[i]));
}
void f4()
{
    struct Marks m[5];
    inputNStudentMarks(m,5);
    displayMarks(m,5);
}
int main()
{
    f4();
    return 0;
}