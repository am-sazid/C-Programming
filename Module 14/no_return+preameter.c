#include<stdio.h>


void sum(int a , int b)
{
    int sum = a + b;
    printf("Break function use return keyword");
    return;
    printf("%d\n",sum);
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);

    return 0;
}