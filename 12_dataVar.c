/* Program to Initialize, assign and print variables of data type:
   int
   float
   char
   double
   string(char) */
#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();
    int a = 20;
    float b = 23.76;
    char c = 'B';
    double d = 3.141592;
    char string[20] = "Mobashir";

    printf("a=%d\nb=%f\nc=%c\nd=%lf\nstring=%s\n",a,b,c,d,string);
    return 0;
}