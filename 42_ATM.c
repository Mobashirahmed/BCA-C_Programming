/* Program for ATM machine that performs:
    1. Withdraw
    2. Deposit
    3. Balance check */

#include<stdio.h>
#include<conio.h>

int main()
{
    int choice;
    float balance = 5000.0;
    float amount;
    // clrscr();

    printf("---Welcome to the ATM Machine---\n");
    printf("1. Withdraw\n");
    printf("2. Deposit\n");
    printf("3. Balance check\n");
    printf("4. Exit\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the amount to withdraw: ");
        scanf("%f", &amount);

        if(amount<0)
        {
            printf("Invalid amount!\n");
        }
        else if(amount>balance)
        {
            printf("Insufficient balance!\n");
        }
        else
        {
            balance -= amount;
            printf("Successfully withdrawn Rs. %.2f\n", amount);
            printf("Remaining balance: Rs. %.2f\n", balance);

        }
        break;
    case 2:
        printf("Enter the amount to deposit: ");
        scanf("%f", &amount);

        if(amount<=0)
        {
            printf("Invalid amount!\n");
        }
        else
        {
            balance += amount;
            printf("Successfully deposited Rs. %.2f\n", amount);
            printf("Updated balance: Rs. %.2f\n", balance);
        }
        break;
    case 3:
        printf("\nYour current balance is: Rs. %.2f\n", balance);
        break;
    case 4:
        printf("\nThank you for using our ATM.\n");
        break;
    
    default:
        printf("\nInvalid choice\n");
        break;
    }
    getch();
    return 0;
}