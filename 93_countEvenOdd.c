/* WAP to count the number of even and odd number in an array */
#include<stdio.h>
int main()
{
    int i, N, even = 0, odd = 0;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Counting the number of even & odd numbers present in the array
    for(i=0; i<N; i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    // Printing the result
    printf("%d %d", even, odd);
    return 0;
}