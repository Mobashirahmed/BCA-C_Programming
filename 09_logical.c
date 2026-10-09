/* Program for Logical Operators in C */
#include<stdio.h>
int main()
{
    int age = 20, marks = 60;
    if(age>18 && marks>50)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}