/* Program to enter a number in [1-7] and display the day of week */

#include<stdio.h>
#include<conio.h>

int main()
{
    int dayNum;
    // clrscr();

    printf("Enter a number in the range [1 to 7]\n");
    scanf("%d", &dayNum);

    switch(dayNum)
    {
        case 1:
            printf("\nMONDAY");
            break;
        case 2:
            printf("\nTUESDAY");
            break;
        case 3:
            printf("\nWEDNESDAY");
            break;
        case 4:
            printf("\nTHURSDAY");
            break;
        case 5:
            printf("\nFRIDAY");
            break;
        case 6:
            printf("\nSATURDAY");
            break;
        case 7:
            printf("\nSUNDAY");
            break;
        default:
            printf("\nInvalid choice!!!");
            break;
    }
    getch();
    return 0;
}