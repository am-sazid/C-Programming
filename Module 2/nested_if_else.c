#include <stdio.h>

int main()
{
    int a = 20000;

    if (a >= 5000)
    {
        printf("I will go to Cox's Bazar.\n");
        if (a >= 10000)
        {
            printf("I will go to Saint Martin.\n");
        }
        else
        {
            printf(" I Will Back");
        }
    }
    else
    {
        printf("I won't go anywhere.");
    }
    return 0;
}