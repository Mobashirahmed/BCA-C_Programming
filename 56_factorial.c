/* Program to find factorial of a number */

#include<stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n==0 || n==1)
    {
        fact = 1;
    }
    else
    {
        for(i=n; i>=1; i--)
        {
            fact = fact * i;
        }
    }
    printf("Factorial of %d is %d", n, fact);
    return 0;
}