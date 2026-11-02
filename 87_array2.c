/* WAP to print 10 Roll no. using Array */

#include<stdio.h>
int main()
{
    int i;
    int rollNo[10] = {265071, 265072, 265073, 265074, 265075, 265076, 265077, 265078, 265079, 265080};

    printf("Printing Roll No. of BCA Ist B\n");
    for(i=0; i<10; i++)
    {
        printf("%d\n", rollNo[i]);
    }

    return 0;
}