/* WAP that accepts the size of array and the array elements from the user and then prints the array */

#include<stdio.h>
int main()
{
    int i, size;
    int arr[50];

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements of the Array\n");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Printing the elements of Array\n");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}