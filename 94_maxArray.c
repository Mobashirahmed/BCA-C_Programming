/* WAP to find the maximum value from an array */
#include<stdio.h>
int main()
{
    int i, N, max;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Finding the maximum value from array
    max = a[0];
    for(i=0; i<N; i++)
    {
        if(a[i]>max)
            max = a[i];
    }
    // Printing the maximum value
    printf("%d", max);
    return 0;
}