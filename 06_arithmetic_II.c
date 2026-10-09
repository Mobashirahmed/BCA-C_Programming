/* Program to see Arithmetic Operators in C */
#include<stdio.h>
#include<conio.h>

void main()
{
    // clrscr(); /* minGw and VS code does not support the use clear screen function */
    int a=10;
    int b=5;

    printf("Addition of a and b is %d\n",a+b);
    printf("Subtraction of a and b is %d\n",a-b);
    printf("Multiplition of a and b is %d\n",a*b);
    printf("Division of a and b is %d\n",a/b);
    printf("Remainder of a and b is %d\n",a%b);

    getch();
}