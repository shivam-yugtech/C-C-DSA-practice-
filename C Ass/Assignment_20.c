#include<stdio.h>
#include<stdlib.h>
void p1()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    switch(marks)
    {
        case 90 ... 100:
            printf("Grade A");
            break;
        case 80 ... 89:
            printf("Grade B");
            break;
        case 70 ... 79:
            printf("Grade C");
            break;
        case 60 ... 69:
            printf("Grade D");
            break;
        case 50 ... 59:
            printf("Grade E");
            break;
        case 0 ... 49:
            printf("Grade F");
            break;
        default:
            printf("Invalid Marks");
             
    }
}
void p2()
{
    int choice=1;
    while(choice!=5)
    {
    printf("\n\n1. Factorial of a number.");
    printf("\n2. Check Even or Odd.");
    printf("\n3. Area of Circle.");
    printf("\n4. Sum of first N natural numbers.");
    printf("\n5. Exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            int x,f=1;
            printf("Enter a number: ");
            scanf("%d",&x);
            while(x)
            {
                f*=x;
                x--;
            }
            printf("Factorial is %d",f);
        }
        break;
        case 2:
        {
            int x;
            printf("Enter a number: ");
            scanf("%d",&x);
            if(x%2==0)
                printf("Even");
            else 
                printf("Odd");
        }
        break;
        case 3:
        {
            float r,A;
            printf("Enter a Radius: ");
            scanf("%f",&r);
            A=3.14*r*r;
            printf("Area of circle is %f",A);
        }
        break;
        case 4:
        {
            int N,i,s=0;
            printf("Enter a number in N: ");
            scanf("%d",&N);
            for(i=1;i<=N;i++)
                s+=i;
            printf("Sum is %d",s);
        }
        break;
        case 5:
            exit(0);
    }
    }
}
void p3()
{
    char choice;
    printf("Enter your choice: ");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'A' ... 'Z':
            printf("Uppercase alphabet");
            break;
        case 'a' ... 'z':
            printf("Lowercase alphabet");
            break;
        default:
            printf("Special character");
    }
}

void p4()
{
    char choice;
    printf("Enter your choice : ");
    scanf("%c",&choice);
    switch(choice)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel");
            break;
        case 'b' ... 'd': case 'f' ... 'h': case 'j' ... 'n': case 'p' ... 't': case 'v' ... 'z':
        case 'B' ... 'D': case 'F' ... 'H': case 'J' ... 'N': case 'P' ... 'T': case 'V' ... 'Z':
            printf("consonents");
            break;
        default:
            printf("Special Character");
    }
}
void p5()
{
    int choice=1;
    while(choice!=5)
    {
    printf("\n\n1. Calculate LCM of two number.");
    printf("\n2. Calculate Sum of the digitsv of a number.");
    printf("\n3. Volume of Cuboid.");
    printf("\n4. Check number is prime or not.");
    printf("\n5. Exit.");
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        {
            int L,x,y;
            printf("Enter two number: ");
            scanf("%d%d",&x,&y);
            for(L=x>y?x:y;L<=x*y;L++)
            {
                if(L%x==0 && L%y==0)
                    break;
            }
            printf("LCM is %d",L);
            break;
        }
        case 2:
        {
            int s=0,x,y;
            printf("Enter a number: ");
            scanf("%d",&x);
            while(x)
            {
                y=x%10;
                s+=y;
                x/=10;
            }
            printf("Sum of digits are %d",s);
            break;
        }
        case 3:
        {
            int V,L,B,H;
            printf("Enter Length,breadth & Height: ");
            scanf("%d%d%d",&L,&B,&H);
            V=L*B*H;
            printf("Volume of Cuboid is %d",V);
            break;
        }
        case 4:
        {
            int x,i;
            printf("Enter a number: ");
            scanf("%d",&x);
            for(i=2;i<x;i++)
            {
                if(x%i==0)
                    break;
            }
            if(i==x)
                printf("prime number");
            else
                printf("Not a prime number");
            break;
        }
        case 5:
            exit(0);
    }
    }
}
int main()
{
    p5();
    return 0;
}