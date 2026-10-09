/* Progrm to find area of circle */

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main()
{
    float r, area;
    // clrscr();

    printf("Enter the radius of circle\n");
    scanf("%f", &r);

    area = PI * r * r;

    printf("Area of circle is %.2f sq. units", area);
    getch();
    return 0;
}