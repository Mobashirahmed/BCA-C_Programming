/* Program to get the report card of a student */

#include<stdio.h>
#include<conio.h>

int main()
{
    float marks;
    // clrscr();

    printf("Enter your marks\n");
    scanf("%f", &marks);

    if(marks >= 80)
    {
        printf("You have secured 1st division with destination");
    }
    else if(marks < 80 && marks >= 60)
    {
        printf("You have secured 1st division");
    }
    else if(marks < 60 && marks >= 50)
    {
        printf("You have secured 2nd division");
    }
    else if(marks < 50 && marks >= 40)
    {
        printf("You have secured 3rd division");
    }
    else if(marks < 40 && marks >= 33)
    {
        printf("You have passed");
    }
    else
    {
        printf("You have failed");
    }

    getch();
    return 0;
}