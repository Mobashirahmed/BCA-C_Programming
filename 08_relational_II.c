/* Program to see Relational Operators in C */
#include<stdio.h>
#include<conio.h>

void main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks>=60)
    {
        printf("You are PASS");
    }
    else
    {
        printf("You are FAIL");
    }

    getch();
}