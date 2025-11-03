#include <stdio.h>

int sum()
{
    int x = 20;
    int y = 10;
    int sum = x + y;
    return sum;  
}
int main()
{
    int ans = sum();
    printf("%d\n",ans);
    return 0;
}