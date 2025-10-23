#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[6] = {0};
    for (int i = 0; i < n; i++)
    {
        int val = a[i];
        fre[val]++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d --> %d\n",i ,fre[i]);
    }

    // printf("0 --> %d\n", fre[0]);
    // printf("1 --> %d\n", fre[1]);
    // printf("2 --> %d\n", fre[2]);
    // printf("3 --> %d\n", fre[3]);
    // printf("4 --> %d\n", fre[4]);
    // printf("5 --> %d\n", fre[5]);

    return 0;
}