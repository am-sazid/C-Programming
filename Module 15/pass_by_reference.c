#include<stdio.h>

int func(int* p)
{
    *p = 20;
}

int main()
{
    int x = 10;
    func(&x);
    printf("%d\n",x);
    return 0;
}