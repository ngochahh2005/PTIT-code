#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll bacThang(int n, int k) {
    vector<ll> dp(n+5, 0);
    vector<ll> s(n+5, 0);
    dp[0] = s[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = (i-k-1 >= 0) ? (s[i-1] - s[i-k-1] + mod) % mod : s[i-1];
        s[i] = (s[i-1] + dp[i]) % mod;
    }
    return dp[n];
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << bacThang(n, k) << "\n";
    }
}