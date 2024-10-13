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
        int n;
        cin >> n;
        int* a = new int[n+1];
        ll* dp = new ll[n+1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        dp[0] = 0; dp[1] = a[1]; dp[2] = a[2];
        for (int i = 3; i <= n; i++) {
            dp[i] = (ll)a[i] + max(dp[i-2], dp[i-3]);
        }
        ll res = *max_element(dp+1, dp+n+1);
        cout << res << "\n";
    }
}