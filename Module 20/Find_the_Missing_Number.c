#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long long int M; 
        long long int A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int multi = A * B * C;

        if (multi == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else
        {
            if (M % multi == 0)
            {
                printf("%lld\n", M / multi);
            }
            else
            {
                printf("-1\n");
            }
        }
    }

    return 0;
}
