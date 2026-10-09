/* Program to check the given number is divisible by 5 as well as divisible by 7.
Also display the proper message that the number is divisible or not divisible by which number */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // clrscr();

    printf("Enter a number\n");
    scanf("%d", &n);

    if(n%5==0)
    {
        if(n%7==0)
        {
            printf("%d is divisible by both", n);
        }
        else
        {
            printf("%d is divisible by 5 but not 7", n);
        }
    }
    else
    {
        if(n%7==0)
        {
            printf("%d is divisible by 7 but not 5", n);
        }
        else
        {
            printf("%d is divisible by none of them", n);
        }
    }

    getch();
    return 0;
}