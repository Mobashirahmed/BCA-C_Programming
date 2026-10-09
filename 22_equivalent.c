/* Program to check Equivalent of two numbers */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    // clrscr();

    printf("Enter a number\n");
    scanf("%d", &a);
    printf("Enter another number\n");
    scanf("%d", &b);

    (a==b) ? printf("Numbers are equal") : printf("Numbers are not equal");

    getch();
    return 0;
}