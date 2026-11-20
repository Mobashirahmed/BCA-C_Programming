/* WAP to find an element in an array (Searching an element in an array) */
#include<stdio.h>
int main()
{
    int i, index, N, target, flag=0;
    int a[100];
    // Enter the number of elements of an array
    scanf("%d", &N);
    // Enter the elements of Array
    for(i=0; i<N; i++)
    {
        scanf("%d", &a[i]);
    }
    // Enter the value to search
    scanf("%d", &target);
    // Searching ...
    for(i=0; i<N; i++)
    {
        if(a[i]==target)
        {
            flag = 1;
            index = i;
            break;
        }
    }
    if(flag)
        printf("Found at index %d", index);
    else
        printf("Not found!!");
    return 0;
}