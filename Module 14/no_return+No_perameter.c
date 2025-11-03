#include <stdio.h>

void sum()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    printf("%d\n", sum);
}

int main()
{
    sum();
    return 0;
}