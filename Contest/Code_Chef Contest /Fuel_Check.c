#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int multi = x * y;
    if (multi >= 100)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    
    return 0;
}