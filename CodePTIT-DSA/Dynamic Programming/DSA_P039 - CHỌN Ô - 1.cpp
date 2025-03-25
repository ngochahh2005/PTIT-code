#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vector<int> dp(1 << n, INT_MIN);
        dp[0] = 0;
        for (int mask = 0; mask < (1 << n); mask++) {
            int i = __builtin_popcount(mask);
            if (i >= n) continue;
            for (int j = 0; j < n; j++) {
                if (!(mask & (1 << j))) {
                    int new_mask = mask | (1 << j);
                    dp[new_mask] = max(dp[new_mask], dp[mask] + a[i][j]);
                }
            }
        }
        cout << dp[(1 << n) - 1] << "\n";
    }
}