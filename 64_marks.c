/* Program to print the grade of student according to marks */

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if(marks >= 50){
        if(marks >= 90){
            printf("Grade: A\n");
        } else {
            printf("Grade: B\n");
        }
    } else {
        printf("Grade: F\n");
    }

    return 0;
}