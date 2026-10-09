/* Program that display the size of every data type */

#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();

    printf("Size of char:           %2zu byte\n", sizeof(char));
    printf("Size of unsigned char:  %2zu byte\n", sizeof(unsigned char));
    printf("Size of short:          %2zu bytes\n", sizeof(short));
    printf("Size of unsigned short: %2zu bytes\n", sizeof(unsigned short));
    printf("Size of int:            %2zu bytes\n", sizeof(int));
    printf("Size of unsigned:       %2zu bytes\n", sizeof(unsigned));
    printf("Size of long:           %2zu bytes\n", sizeof(long));
    printf("Size of unsigned long:  %2zu bytes\n", sizeof(unsigned long));
    printf("Size of float:          %2zu bytes\n", sizeof(float));
    printf("Size of double:         %2zu bytes\n", sizeof(double));
    printf("Size of long double:    %2zu bytes\n", sizeof(long double));

    getch();
    return 0;
}