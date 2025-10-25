#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    int m1, m2, d;
    int sum;
    int mul;
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        sum = m1 + m2;
        mul = m1 * d;

        int ans = mul / sum;
        int total = d - ans;
        printf("%d\n", total);
    }

  
    return 0;
}