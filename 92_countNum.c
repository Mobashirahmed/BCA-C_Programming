/* WAP to count the number of positive, negative and zero in an array */
#include<stdio.h>
int main()
{
    int i, N, positive = 0, negative = 0, zero = 0;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Counting the number of positive, negative & zero in the array
    for(i=0; i<N; i++)
    {
        if(a[i]>0)
            positive++;
        else if(a[i]<0)
            negative++;
        else
            zero++;
    }
    // Printing the result
    printf("%d %d %d", positive, negative, zero);
    return 0;
}