#include<stdio.h>
#include<stdlib.h>
void p1()
{
    int x;
    printf("Enter Month number: ");
    scanf("%d",&x);
    switch(x)
    {
        case 1: 
            printf("31 days in a month");
            break;
        case 2: 
            printf("28 or 29 days in a month");
            break;
        case 3: 
            printf("31 days in a month");
            break;
        case 4: 
            printf("30 days in a month");
            break;
        case 5: 
            printf("31 days in a month");
            break;
        case 6: 
            printf("30 days in a month");
            break;
        case 7: 
            printf("31 days in a month");
            break;
        case 8: 
            printf("31 days in a month");
            break;
        case 9: 
            printf("30 days in a month");
            break;
        case 10: 
            printf("31 days in a month");
            break;
        case 11: 
            printf("30 days in a month");
            break;
        case 12: 
            printf("31 days in a month");
            break; 
        default:
            printf("Invalid Month Number");
    }
}
void p2()
{
    int choice,a,b;
    while(choice!=5)
    {
    printf("\n\n1. Addition.");
    printf("\n2. Subtraction.");
    printf("\n3. Multiplication.");
    printf("\n4. Division.");
    printf("\n5. Exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
            printf("Enter two number: ");
            scanf("%d%d",&a,&b);
            printf("Sum of %d and %d is %d",a,b,a+b);
            break;
        case 2: 
            printf("Enter two number: ");
            scanf("%d%d",&a,&b);
            printf("Difference of %d and %d is %d",a,b,a-b);
            break;
        case 3: 
            printf("Enter two number: ");
            scanf("%d%d",&a,&b);
            printf("Product of %d and %d is %d",a,b,a*b);
            break;
        case 4: 
            printf("Enter two number: ");
            scanf("%d%d",&a,&b);
            printf("Quotient of %d and %d is %d",a,b,a/b);
            break;
        case 5: 
            exit(0);
        default:
            printf("!!!!Invalid choice!!!!");
    }
    }

}
void p3()
{
    int d;
    printf("Enter day number: ");
    scanf("%d",&d);
    switch(d)
    {
        case 1: 
            printf(" Monday");
            break;
         case 2: 
            printf(" tuesday");
            break;
         case 3: 
            printf(" Wednesday");
            break;
         case 4: 
            printf(" Thursday");
            break;
         case 5: 
            printf(" Friday");
            break;
         case 6: 
            printf(" Saturday");
            break;
         case 7: 
            printf(" Sunday");
            break;
        default:
            printf("Invalid day");
        
    }
}
void p4()
{
    int choice=1,a,b,c;
    while(choice!=4)
    {
    printf("\n\n1. check for isosceles triangle.");
    printf("\n2. check for Right angle triangle.");
    printf("\n3. check for Equilateral triangle.");
    printf("\n4. Exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter lengths of an triangle: ");
            scanf("%d%d%d",&a,&b,&c);
                if(a==b || b==c || c==a)
                    printf("Given Lengths are of Isosceles triangle");
                else
                    printf("Not a Isosceles triangle");
            break;
        case 2:
            printf("Enter lengths of an triangle: ");
            scanf("%d%d%d",&a,&b,&c);
                if(a*a+b*b==c*c)
                    printf("Given Lengths are of Right angle triangle");
                else
                    printf("Not a Right angle triangle");
            break;
        case 3:
            printf("Enter lengths of an triangle: ");
            scanf("%d%d%d",&a,&b,&c);
                if(a==b==c)
                    printf("Given Lengths are of Equilateral triangle");
                else
                    printf("Not a Equilateral triangle");
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
    }
    }
}
void p5()
{
    int var;
    printf("Enter variable: ");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("invalid");
    }
}
int main()
{
    p5();
    return 0;
}