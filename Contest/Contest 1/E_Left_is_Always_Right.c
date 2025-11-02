#include <stdio.h>
#include <string.h>

#define MOD 998244353
#define MAXN 100005

int t, n, k;
char s[MAXN];
int dp[MAXN][2], prefix[MAXN][2];

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        scanf("%s", s);
        
        int m = (k - 1) / 2;
        
        // The key observation: for the string to be good, 
        // all characters at positions congruent modulo (m+1) must be the same
        // within each block of length k
        
        memset(dp, 0, sizeof(dp));
        memset(prefix, 0, sizeof(prefix));
        
        dp[0][0] = dp[0][1] = 1;
        prefix[0][0] = 1;
        prefix[0][1] = 1;
        
        for (int i = 1; i <= n; i++) {
            // Check if we can place '0' at position i-1
            if (s[i-1] != '1') {
                if (i >= m + 1) {
                    dp[i][0] = (prefix[i-1][1] - prefix[i-m-1][1] + MOD) % MOD;
                } else {
                    dp[i][0] = prefix[i-1][1];
                }
            }
            
            // Check if we can place '1' at position i-1
            if (s[i-1] != '0') {
                if (i >= m + 1) {
                    dp[i][1] = (prefix[i-1][0] - prefix[i-m-1][0] + MOD) % MOD;
                } else {
                    dp[i][1] = prefix[i-1][0];
                }
            }
            
            // Update prefix sums
            prefix[i][0] = (prefix[i-1][0] + dp[i][0]) % MOD;
            prefix[i][1] = (prefix[i-1][1] + dp[i][1]) % MOD;
        }
        
        int ans = (dp[n][0] + dp[n][1]) % MOD;
        printf("%d\n", ans);
    }
    return 0;
}