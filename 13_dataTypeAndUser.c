/* Program to take input from user of different data types and print them */
#include<stdio.h>
#include<conio.h>

void main()
{
    // clrscr();
    char name[20];
    int roll_no;
    float marks;

    printf("Enter your name ");
    scanf("%s", &name);
    printf("Enter your roll no. ");
    scanf("%d", &roll_no);
    printf("Enter your marks(in percentage) ");
    scanf("%f", &marks);

    printf("Name       :%s\n",name);
    printf("Roll No.    %d\n",roll_no);
    printf("Marks      :%.2f",marks);
    getch();
}