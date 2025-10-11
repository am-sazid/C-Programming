#include<stdio.h>

int main()
{
    int X;
    scanf("%d",&X);
    int s = X / 1000 ;
    if (s % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }    
    return 0;
}


