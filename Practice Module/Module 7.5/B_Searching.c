#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",  &a[i]);
    }

    int x;
    scanf("%d", &x);

    int f = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("%d\n", i);
            f = 1;
            break;
        }
    }
    
    if (!f)
        printf("-1");

    return 0;
}
