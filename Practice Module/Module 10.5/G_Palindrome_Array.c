#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int b[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }

    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i < j)
    {
        if (a[i] == a[j])
        {
            count++;
        }
        
        i++;
        j--;
    }
    int diff = n / 2;
    if (diff == count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}