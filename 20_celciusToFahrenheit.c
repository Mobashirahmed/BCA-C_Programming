/* Program to convert the given temperature in celcius to fahrenheit */

#include<stdio.h>
#include<conio.h>

int main()
{
    float celcius, fahrenheit;
    // clrscr();

    printf("Enter the temperature (in celcius)\n");
    scanf("%f", &celcius);

    fahrenheit = (celcius * 9.0/5.0) + 32.0;

    printf("Temperature in fahrenheit is %f", fahrenheit);
    getch();
    return 0;
}