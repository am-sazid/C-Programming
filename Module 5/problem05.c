#include<stdio.h>

int main()
{
    char X ;
    scanf("%c",&X);
    if (X >= '0' && X <= '9')
    {
        printf("IS DIGIT\n");
    }
    else if ( X >= 'A' && X <= 'Z')
    {
        printf("ALPHA\n");
        printf("IS CAPITAL\n");
    }
    else{
        printf("ALPHA\n");
        printf("IS SMALL\n");
    }
    return 0;
}