#include <stdio.h>
#include <stdint.h>

#define MAXN 200000
#define MAXB 20

int a[MAXN];

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    while (q--) {
        int X;
        scanf("%d", &X);
        long long ans = 0;

        // Make a copy of a[] to simulate increments
        int ai[MAXN];
        for (int i = 0; i < n; i++) ai[i] = a[i];

        // Process bits from MSB to LSB
        for (int bit = MAXB - 1; bit >= 0; bit--) {
            int mask = 1 << bit;

            if (X & mask) {
                // Bit must be 1 in all ai
                for (int i = 0; i < n; i++) {
                    if (!(ai[i] & mask)) {
                        int add = mask - (ai[i] % (mask * 2));
                        ai[i] += add;
                        ans += add;
                    }
                }
            } else {
                // Bit must be 0 in at least one ai
                // Find minimal increment to make bit 0 in AND
                long long min_add = (long long)1 << 60;
                for (int i = 0; i < n; i++) {
                    int temp = ai[i];
                    int add = 0;
                    if (temp & mask) {
                        add = (mask * 2) - (temp % (mask * 2));
                    } else {
                        add = 0;
                    }
                    if (add < min_add) min_add = add;
                }
                ans += min_add;
                // Apply minimal increment to one number
                for (int i = 0; i < n; i++) {
                    int temp = ai[i];
                    int add = 0;
                    if (temp & mask) add = (mask * 2) - (temp % (mask * 2));
                    if (add == min_add) {
                        ai[i] += add;
                        break;
                    }
                }
            }
        }

        printf("%lld\n", ans);
    }

    return 0;
}
