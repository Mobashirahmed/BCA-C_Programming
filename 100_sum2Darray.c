/* WAP to add all the elements of 2D-Array */

#include<stdio.h>
int main()
{
    int i, j, sum = 0;
    int a[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Calculating Sum
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum += a[i][j];
        }
    }
    // Printing the Sum
    printf("%d", sum);
    return 0;
}