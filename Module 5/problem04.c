#include<stdio.h>

int main()
{
    char X;
    scanf("%c",&X);
    if ( X >= 'a' && X <= 'z')
    {
        X -= 32;
        printf("%c",X);
    }
    else{
        X += 32;
        printf("%c",X);
    }
    return 0;
}