/* Program to find the area of Rectangle */

#include<stdio.h>
#include<conio.h>

int main()
{
    float length, breadth, area;
    // clrscr();

    printf("Enter the length and breadth of rectangle\n");
    scanf("%f %f", &length, &breadth);

    area = length * breadth;

    printf("Area of rectangle is %.2f sq. units", area);
    getch();
    return 0;
}