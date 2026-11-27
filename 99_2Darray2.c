/* WAP of 2D Array in which take data from user and print it */

#include<stdio.h>
int main()
{
    int i, j;
    int arr[2][2];
    // taking user input
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // printing the array
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}