/* Program to enter a number in [1 - 12] and display the month of year */

#include<stdio.h>
#include<conio.h>

int main()
{
    int month;
    // clrscr();

    printf("Enter a number in the range [1 to 12]\n");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
            printf("\nJANUARY");
            break;
        case 2:
            printf("\nFEBRUARY");
            break;
        case 3:
            printf("\nMARCH");
            break;
        case 4:
            printf("\nAPRIL");
            break;
        case 5:
            printf("\nMAY");
            break;
        case 6:
            printf("\nJUNE");
            break;
        case 7:
            printf("\nJULY");
            break;
        case 8:
            printf("\nAUGUST");
            break;
        case 9:
            printf("\nSEPTEMBER");
            break;
        case 10:
            printf("\nOCTOBER");
            break;
        case 11:
            printf("\nNOVEMBER");
            break;
        case 12:
            printf("\nDECEMBER");
            break;
        default:
            printf("\nInvalid choice!!!");
            break;
    }
    getch();
    return 0;
}