/* WAP to find sum of all the elements of an array */
#include<stdio.h>
int main()
{
    int i, N, sum;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Computing the Sum of Elements
    sum = 0;
    for(i=0; i<N; i++)
    {
        sum += a[i];
    }
    // Printing the sum
    printf("%d", sum);
    return 0;
}