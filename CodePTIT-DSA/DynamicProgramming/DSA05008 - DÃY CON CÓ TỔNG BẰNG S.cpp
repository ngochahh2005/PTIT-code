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
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int dp[s+5];
        fill(dp, dp+s+5, 0);
        dp[0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = s; j >= a[i]; j--) {
                if (dp[j] == 0 && dp[j - a[i]] == 1) dp[j] = 1;
            }
        }
        if (dp[s] == 1) cout << "YES\n";
        else cout << "NO\n";
    }
}