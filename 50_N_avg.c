/* Program to calculate the average of first n numbers */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i = 1, sum = 0;
    float avg;
    // clrscr();

    printf("Enter the value of n: ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    avg = (float)sum/n;

    printf("Average of first %d numbers is %.2f", n, avg);
    
    getch();
    return 0;
}