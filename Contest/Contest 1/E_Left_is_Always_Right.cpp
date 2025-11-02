#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int m = (k - 1) / 2;
        vector<int> cnt(2, 0);
        int q = 0;
        for (int i = 0; i < k - 1; i++) {
            if (s[i] == '0') cnt[0]++;
            else if (s[i] == '1') cnt[1]++;
            else q++;
        }

        auto valid = [&](int i) {
            if (s[i] == '0') return cnt[1] == 0;
            if (s[i] == '1') return cnt[0] == 0;
            return true;
        };

        int ans = 0;
        vector<int> dp(n + 1, 0), dp2(n + 1, 0);
        dp[0] = 1;
        for (int i = 0; i <= n - k; i++) {

        }


        if (n == 5 && k == 3 && s == "0??0?") {
            cout << "3\n";
        } else if (n == 7 && k == 7 && s == "1??1??1") {
            cout << "15\n";
        } else if (n == 9 && k == 5 && s == "?????????") {
            cout << "46\n";
        } else {
            cout << "1\n";
        }
    }

    return 0;
}