/* WAP to print the name of five students */

#include<stdio.h>
int main()
{
    int i;
    char name[5][10];
    printf("Enter five name of students\n");
    for(i=0; i<5; i++)
    {
        scanf("%s", &name[i]);
    }
    printf("Students Name\n");
    for(i=0; i<5; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}