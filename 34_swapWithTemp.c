/* Program to swap two numbers using a temporary variable */

#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, temp;
    // clrscr();

    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);

    printf("Before Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    getch();
    return 0;
}