/* Program to check the given number is divisible by 5 as well as divisible by 7 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // clrscr();

    printf("Enter a number\n");
    scanf("%d", &n);

    if(n%5==0 && n%7==0)
    {
        printf("%d is divisible by both 5 and 7", n);
    }
    else
    {
        printf("%d fails the divisibility test", n);
    }

    getch();
    return 0;
}