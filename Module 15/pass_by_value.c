#include<stdio.h>

void fun(int x)
{
    x = 20;
    printf("%p\n",&x);
}

int main()
{
    int x = 10;
    fun(x);
    printf("%p\n",&x);
    return 0;
}