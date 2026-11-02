/* WAP that prints the array, that is dynamically initialized */

#include<stdio.h>
int main()
{
    int i, size;
    int arr[] = {15, 20, 25, 30, 35, 40};   // You can insert or delete Elements

    size = sizeof(arr)/sizeof(arr[0]);

    printf("Printing the elements of Array\n");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}