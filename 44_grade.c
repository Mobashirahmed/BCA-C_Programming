/* Program to print the Remarks in accrodance of grade of a student */

#include<stdio.h>
#include<conio.h>

int main()
{
    char grade;
    // clrscr();

    printf("Enter your grade from the list: [O, A, B, C, F]\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'O':
            printf("\nOutstanding");
            break;
        case 'A':
            printf("\nExcellent");
            break;
        case 'B':
            printf("\nGood");
            break;
        case 'C':
            printf("\nFair");
            break;
        case 'F':
            printf("\nFail");
            break;
        default:
            printf("\nInvalid grade");
            break;
    }
    printf("\nRun Successful!!");
    getch();
    return 0;
}