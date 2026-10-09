/* Program to check whether you are eligible to vote or not */
#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }

    return 0;
}