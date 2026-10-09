/* Program to find volume of cylinder */

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main()
{
    float r, h, volume;
    // clrscr();

    printf("Enter the radius of base of cylinder\n");
    scanf("%f", &r);
    printf("Enter the height of cylinder\n");
    scanf("%f", &h);

    volume = PI * r * r * h;

    printf("Volume of cylinder is %.2f cu. units", volume);
    getch();
    return 0;
}