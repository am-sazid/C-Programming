#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int star = 1;
    // int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp <= n - i ; sp++)
        {
            printf(" ");
        }

        // int num = 1;
        for (int j = 1; j <= i ; j++)
        {
            printf("%d", j);
            // num++;
        }

        printf("\n");
        // star++ ;
        // space--;
    }

    return 0;
}