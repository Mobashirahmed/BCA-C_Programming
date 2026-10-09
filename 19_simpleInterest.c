/* Program to find Simple Interest */

#include<stdio.h>
#include<conio.h>

int main()
{
    float principal, inrate, interest;
    int time;
    // clrscr();

    printf("Enter the principal amount\n");
    scanf("%f", &principal);
    printf("Enter the interest rate\n");
    scanf("%f", &inrate);
    printf("Enter the period\n");
    scanf("%d", &time);

    interest = (principal * inrate * time)/100;

    printf("The Simple Interest is %.2f", interest);
    getch();
    return 0;
}