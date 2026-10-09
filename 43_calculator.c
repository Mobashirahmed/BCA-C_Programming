/* Program of a Calculator */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b;
    char operator;
    // clrscr();

    printf("---Welcome to Calculator---\n");
    
    printf("Select the operator\n");
    printf("\'+\' for addition\n");
    printf("\'-\' for subtraction\n");
    printf("\'*\' for multiplication\n");
    printf("\'/\' for division\n");
    printf("\'%%\' for remainder\n");
    scanf("%c", &operator);
    // operator = '%';
    
    printf("Enter the operands to perform calculation\n");
    scanf("%d %d", &a, &b);

    switch(operator)
    {
        case '+':
            printf("\n%d + %d = %d", a, b, a+b);
            break;
        case '-':
            printf("\n%d - %d = %d", a, b, a-b);
            break;
        case '*':
            printf("\n%d * %d = %d", a, b, a*b);
            break;
        case '/':
            printf("\n%d / %d = %d", a, b, a/b);
            break;
        case '%':
            printf("\n%d %% %d = %d", a, b, a%b);
            break;
        
        default:
            printf("\nInvalid operator\n");
            break;
    }
    getch();
    return 0;
}