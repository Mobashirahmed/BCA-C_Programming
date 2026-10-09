/* Program too find the volume of cone */

#include<stdio.h>
#include<conio.h>
#define PI 3.14

int main()
{
    float r, h, volume;
    // clrscr();

    printf("Enter the radius of base of cone\n");
    scanf("%f", &r);
    printf("Enter the height of cone\n");
    scanf("%f", &h);

    volume = 1.0/3.0 * PI * r * r * h;

    printf("Volume of cone is %.2f cu. units", volume);
    getch();
    return 0;
}