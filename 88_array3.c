/* WAP to print 10 name using Array */

#include<stdio.h>
int main()
{
    int i;
    char name[10][10] = {"Aditya", "Aman", "Ashutosh", "Ashu", "Rashid", "Tanmay", "Ujjwal", "Mobashir", "Partik", "Rohit"};

    printf("Printing names of BCA Ist B\n");
    for(i=0; i<10; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}