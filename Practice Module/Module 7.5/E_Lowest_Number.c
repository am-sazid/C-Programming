#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int min_v = A[0];
    int min_index = 1; // 1-indexed

    for (int i = 1; i < N; i++) {
        if (A[i] < min_v) {
            min_v = A[i];
            min_index = i + 1; // 1-indexed position
        }
    }

    printf("%d %d\n", min_v, min_index);

    return 0;
}
