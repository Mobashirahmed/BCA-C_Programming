/* Program to print name using for loop */

#include<stdio.h>

int main()
{
    int i;
    char ch[20];
    printf("Enter your name: ");
    scanf("%s", &ch);

    for(i=0; i<5; i++)
    {
        printf("%s\n", ch);
    }
    return 0;
}