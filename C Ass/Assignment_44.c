#include<stdio.h>

struct Employee 
{
    int employee_Id;
    char employee_name[30];
    float employee_salary;
};
struct Employee input();
void display(struct Employee);

int main()
{
    struct Employee E[10];
}

struct Employee input()
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
void display(struct Employee E)
{
    printf("\n%d %s %f",E.employee_Id,E.employee_name,E.employee_salary);
}
