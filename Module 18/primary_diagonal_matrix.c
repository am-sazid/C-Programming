#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &a[i][j]);
        }
    }

    if (r == c)
    {
        int flag = 200;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i == j)
                {
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        flag = 2;
                        printf("Not a diagonal matrix");
                    }
                }
            }
        }
        if (flag == 200)
        {
            printf("diagonal matrix");
        }
    }
    else
    {
        printf("Not a diagonal matrix");
    }

    return 0;
}