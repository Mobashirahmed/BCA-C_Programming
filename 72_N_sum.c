/* Program to find sum of first N Natural Numbers using while loop */
#include<stdio.h>
int main(){
    int N, sum = 0, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    while(i<=N){
        // Add the current value of i to sum
        sum += i;
        // increment
        i++;
    }
    printf("Sum = %d", sum);
    return 0;
}