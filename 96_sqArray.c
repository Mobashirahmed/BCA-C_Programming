/* WAP to find the square of each element of an array and store it in another array */
#include<stdio.h>
int main()
{
    int i, N;
    int a[100], b[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Computing the square and storing in another array
    for(i=0; i<N; i++)
    {
        b[i] = a[i]*a[i];
    }
    // Printing the result
    for(i=0; i<N; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}