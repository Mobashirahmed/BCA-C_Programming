/* WAP to transpose the 2D array */

#include<stdio.h>
int main()
{
    int i, j;
    int a[2][3], b[3][2];

    printf("Enter the elements of MATRIX\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("TRANSPOSE\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            b[i][j] = a[j][i];
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}