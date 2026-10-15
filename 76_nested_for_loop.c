#include<stdio.h>
int main(){

    // limit for i
    int m = 4;

    // limit for j
    int n = 5;

    // Outer loop
    for(int i = 0; i<m; i++){
        printf("i = %d : ", i);

        // Inner loop
        for(int j = 0; j<n; j++){
            printf("%d ", i*n+j);
        }
        printf("\n");
    }
    return 0;
}