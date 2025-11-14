#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int pyramid = (N + 11) / 2;
    int st = 2 * pyramid - 1;

    for (int i = 0; i < pyramid; i++)
    {
        int star = 2 * i + 1;
        int sp = (st - star) / 2;

        for (int j = 0; j < sp; j++)
            printf(" ");
        for (int j = 0; j < star; j++)
            printf("*");
        printf("\n");
    }

    int width = N;
    int height = 5;
    int spaces = (st - width) / 2;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < spaces; j++)
            printf(" ");
        for (int j = 0; j < width; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
