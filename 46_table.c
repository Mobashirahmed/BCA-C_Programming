/* Program to print the table of 2 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 1;
    // clrscr();

    while(i <= 10)
    {
        printf("2 * %2d = %2d\n", i , 2 * i);
        i++;
    }

    getch();
    return 0;
}