/* WAP to find the minimum value from an array */
#include<stdio.h>
int main()
{
    int i, N, min;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Finding the minimum value from array
    min = a[0];
    for(i=0; i<N; i++)
    {
        if(a[i]<min)
            min = a[i];
    }
    // Printing the minimum value
    printf("%d", min);
    return 0;
}