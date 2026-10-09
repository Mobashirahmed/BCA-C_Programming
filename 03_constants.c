/* Program to see constants in C */
#include<stdio.h>
int main()
{
    int age = 20;          /* identifier 'age' + integer constant */
    char grade = 'A';      /* character constant */
    const float PI = 3.14; /* const keyword, 'PI' identifier, floating point constant */

    printf("Age=%d Grade=%c PI=%.2f \n", age, grade, PI);
    return 0;
}