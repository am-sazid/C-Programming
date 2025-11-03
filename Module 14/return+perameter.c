#include <stdio.h>

int main()
{
    // int x = 10;
    int total = sum(10);
    int total2 = sum(20);
    printf("%d %d",total,total2);
    return 0;
}


int sum(int num)
{
    int val = num + 2;
    // int val2 = num - 2;
    return val;
}