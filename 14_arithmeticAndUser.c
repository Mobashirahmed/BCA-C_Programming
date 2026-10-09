/* Program to take User input two numbers and perform arithmetic operations on them */
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);

    printf("Sum of %d and %d is %d\n", a, b, a+b);
    printf("Difference of %d and %d is %d\n", a, b, a-b);
    printf("Product of %d and %d is %d\n", a, b, a*b);
    printf("Quotient of %d and %d is %d\n", a, b, a/b);
    printf("Remainder of %d and %d is %d", a, b, a%b);

    return 0;
}