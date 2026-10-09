/* Program that accepts a number from the user in the range [1 to 7] and then print the name of the corresponding to it */

#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // clrscr();

    printf("Enter a number from the ramge [1 to 7]\n");
    scanf("%d", &n);

    if(n==1)
    {
        printf("\n\tMONDAY");
    }
    else
    {
        if(n==2)
        {
            printf("\n\tTUESDAY");
        }
        else
        {
            if(n==3)
            {
                printf("\n\tWEDNESDAY");
            }
            else
            {
                if(n==4)
                {
                    printf("\n\tTHURSDAY");
                }
                else
                {
                    if(n==5)
                    {
                        printf("\n\tFRIDAY");
                    }
                    else
                    {
                        if(n==6)
                        {
                            printf("\n\tSATURDAY");
                        }
                        else
                        {
                            if(n==7)
                            {
                                printf("\n\tSUNDAY");
                            }
                            else
                            {
                                printf("Incorrect choice!!!");
                            }
                        }
                    }
                }
            }
        }
    }

    getch();
    return 0;
}