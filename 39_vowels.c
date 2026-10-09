/* Program to determine whether an entered character is vowel or not */

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch;
    // clrscr();

    printf("Enter a character\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("\nvowel");
        break;
    case 'a':
        printf("\nvowel");
        break;
    case 'E':
        printf("\nvowel");
        break;
    case 'e':
        printf("\nvowel");
        break;
    case 'I':
        printf("\nvowel");
        break;
    case 'i':
        printf("\nvowel");
        break;
    case 'O':
        printf("\nvowel");
        break;
    case 'o':
        printf("\nvowel");
        break;
    case 'U':
        printf("\nvowel");
        break;
    case 'u':
        printf("\nvowel");
        break;
    default:
        printf("\nNot vowel");
        break;
    }
    getch();
    return 0;
}