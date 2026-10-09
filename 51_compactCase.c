/* Program to determine whether an entered character is vowel or not */

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    // clrscr();

    printf("Enter any character: ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
            break;
    }
    getch();
}