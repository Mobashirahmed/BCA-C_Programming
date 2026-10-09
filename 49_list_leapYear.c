/* Program to list all leap years from 1900 to 2100 */

#include<stdio.h>
#include<conio.h>

int main()
{
    int year = 1900;
    // clrscr();

    printf("Leap years from 1900 to 2100 are:\n");

    do
    {
        if(year%400==0)
        {
            printf("%d\n", year);
        }
        else
        {
            if(year%4==0)
            {
                if(year%100!=0)
                {
                    printf("%d\n", year);
                }
            }
        }
        year++;
    } while (year <= 2100);

    getch();
    return 0;
}