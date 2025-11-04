#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = 0;
    int star2 = n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int s = 0; s <= star; s++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        star += 2;
    }
    return 0;
}