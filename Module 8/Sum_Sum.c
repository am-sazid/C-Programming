#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum = 0;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum += a[i];
        }
        else
        {
            diff += a[i];
        }
    }
    printf("%d ",sum);
    printf("%d ",diff);
    
    return 0;
}