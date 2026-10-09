/* Program to convert the given temperature in fahrenheit to celcius */

#include<stdio.h>
#include<conio.h>

int main()
{
    float fahrenheit, celcius;
    // clrscr();

    printf("Enter the temperature (in fahrenheit)\n");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32.0) * 5.0/9.0;

    printf("Temperature in celcius is %f", celcius);
    getch();
    return 0;
}