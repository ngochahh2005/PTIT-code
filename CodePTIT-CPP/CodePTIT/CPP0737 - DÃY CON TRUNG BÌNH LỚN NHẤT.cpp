#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n+1];
        int dp[n+1];
        dp[0] = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) {
            dp[1] = (double)dp[i-1] + a[i];
        }
        int ma = dp[1], idx = 1;
        for (int i = 2; i <= n-k+1; i++) {
            dp[i] = dp[i-1] - a[i-1] + a[i+k-1];
            if (dp[i] > ma) {
                ma = dp[i];
                idx = i;
            }
        }
        for (int i = idx; i < idx + k; i++) cout << a[i] << " ";
        cout << "\n";
    }
}