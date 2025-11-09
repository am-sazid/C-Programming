#include <stdio.h>

void hello(int i)
{
    printf("%d\n", i);
    if (i == 5)
    {
        return;
    }

    hello(i + 1);
}

int main()
{

    int i = 1;
    printf("Start\n");

    hello(i);
    printf("End\n");
    return 0;
}