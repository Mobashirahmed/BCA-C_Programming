/* Program to find whether the given number is odd or even */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    // clrscr();

    printf("Enter a positive number\n");
    scanf("%d", &a);

    if(a%2 == 0)
    {
        printf("%d is an even number", a);
    }
    else
    {
        printf("%d is an odd number", a);
    }

    getch();
    return 0;
}