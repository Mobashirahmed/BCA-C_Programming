/* Programm to check driving eligibility */
#include<stdio.h>
#include<conio.h>

void main()
{
    // clrscr();

    int age;
    char licence;

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a licence (y/n): ");
    scanf(" %c", &licence);

    if(age>=18 && licence=='y')
    {
        printf("You can drive!");
    }
    else
    {
        printf("You cannot drive!");
    }

    getch();
}