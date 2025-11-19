#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);

        int A[N];
        int B[N];
        int C[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }

        for (int i = 0; i < N - 1; i++)
        {
            int idx = i;
            for (int j = i + 1; j < N; j++)
            {
                if (B[j] < B[idx])
                {
                    idx = j;
                }
            }
            int temp = B[i];
            B[i] = B[idx];
            B[idx] = temp;
        }

        for (int i = 0; i < N; i++)
        {
            if (A[i] > B[i])
                C[i] = A[i] - B[i];
            else
                C[i] = B[i] - A[i];
        }

        for (int i = 0; i < N; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}
