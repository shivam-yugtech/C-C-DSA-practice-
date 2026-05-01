#include<stdio.h>
#include<string.h>

struct Employee 
{
    int employee_Id;
    char employee_name[30];
    float employee_salary;
};

struct Employee inputEmployee();
void displayEmployee(struct Employee);

int main()
{
    struct Employee E[10];
}

struct Employee inputEmployee()
{
    struct Employee E;
    printf("Enter employee_id,employee_name & employee_salary");
    scanf("%d",&E.employee_id);
    fflush(stdin);
    fgets(E.employee_name,30,stdin);
    E.employee_name[strlen(E.employee_name)-1]='\0';
    scanf("%f",&E.employee_salary);
    return E;
}
void displayEmployee(struct Employee E)
{
    printf("\n%d %s %f",E.employee_Id,E.employee_name,E.employee_salary);
}
struct Employee highest_salary_Employee(struct Employee E[],int n)
{
    struct Employee maxSalaryEmployee;
    int i;
    maxSalaryEmployee=E[0];
    for(i=1;i<n;i++)
    {
        if(maxSalaryEmployee.employee_salary<E[i].employee_salary)
            maxSalaryEmployee=E[i];
    }
    return maxSalaryEmployee;
}
void sortBySalary(struct Employee E[],int n)
{
    int i,r;
    struct Employee temp;
    for(r=1;r>n;r++)
    {
        for(i=0;i<n-1-r;i++)
        {
            if(E[i].employee_salary>E[i+1].employee_salary)
            {
                temp=E[i];
                E[i]=E[i+1];
                E[i+1]=temp;
            }
        }
    }
}
void sortByName(struct Employee E[],int n)
{
    int i,r;
    struct Employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(strcmp(E[i].employee_name,E[i+1].employee_name)>0)
            {
                temp=E[i];
                E[i]=E[i+1];
                E[i+1]=temp;
            }
        }
    }
}