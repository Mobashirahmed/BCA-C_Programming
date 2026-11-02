/*Program to print array elements through index and through loop traversal */

#include<stdio.h>
int main()
{
    int i;
    int marks[5] = {65, 75, 80, 85, 90};

    // for accessing data one by one, we'll use the index
    printf("%d\n", marks[0]);   // 65
    printf("%d\n", marks[4]);   // 75
    printf("%d\n", marks[5]);   // throws error or prints garbage value

    marks[4] = 95;  // manipulation and updation of data
    printf("%d\n", marks[4]);

    // printing the array through loop traversal
    for(i=0; i<5; i++)
    {
        printf("%d ", marks[i]);
    }
    // printf("\n");

    return 0;
}