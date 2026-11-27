/* WAP to illustrate 2D-Array */

#include<stdio.h>
int main()
{
    int row, col;
    int arr[2][2] = { {10, 20}, {40, 60} };

    for(row=0; row<2; row++)
    {
        for(col=0; col<2; col++)
        {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
    return 0;
}