#include <stdio.h>

void hello(int i, int n)
{
    printf("%d\n", i);
    if (i == n)
    {
        return;
    }
    hello(i + 1, n);
}

int main()
{

    int i = 1;
    int n;
    scanf("%d", &n);
    printf("Start\n");
    hello(i, n);
    printf("End\n");
    return 0;
}