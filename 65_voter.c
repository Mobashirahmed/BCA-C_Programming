/* Program to demonstrate the use of if else-if else statement */

#include<stdio.h>

int main(){
    int i = 20;

    // if else ladder with three conditions
    if(i == 10)
        printf("Not Elogible");
    else if(i == 15)
        printf("wait for three years");
    else if(i == 20)
        printf("You can vote");
    else
        printf("not a valid age");
    return 0;
}