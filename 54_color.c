/* Program to print color using switch case */

#include<stdio.h>

int main()
{
    char ch;
    printf("Enter a chracter:\nv : VIOLET\ni : INDIGO\nb : BLUE\ng : GREEN\ny : YELLOW\no : ORANGE\nr : RED\n");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'v':
            printf("VIOLET");
            break;
        case 'i':
            printf("INDIGO");
            break;
        case 'b':
            printf("BLUE");
            break;
        case 'g':
            printf("GREEN");
            break;
        case 'y':
            printf("YELLOW");
            break;
        case 'o':
            printf("ORANGE");
            break;
        case 'r':
            printf("RED");
            break;
        default:
            printf("Invalid color code");
    }
    return 0;
}