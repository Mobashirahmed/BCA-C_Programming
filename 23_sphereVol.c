/* Program to find volume of sphere */

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main()
{
    float r, volume;
    // clrscr();

    printf("Enter the radius of circle\n");
    scanf("%f", &r);

    volume = 4.0/3.0 * PI * r * r * r;

    printf("Volume of sphere is %.2f cu. units", volume);
    getch();
    return 0;
}