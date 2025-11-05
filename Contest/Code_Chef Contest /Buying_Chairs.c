#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int W, P, K;
        scanf("%d %d %d", &W, &P, &K);

        int wood_taken;

        if (W < K)
        {
            wood_taken = W;
        }
        else
        {
            wood_taken = K;
        }

        int stylishness = (wood_taken * 2) + ((K - wood_taken) * 1);

        printf("%d\n", stylishness);
    }

    return 0;
}
