#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll steal(int a[], int n) {
    vector<ll> dp(n+5, 0);
    for (int i = 0; i < n; i++) {
        if (i < 2) dp[i] = a[i];
        else if (i == 2) dp[i] = dp[i-2] + a[i];
        else dp[i] = max(dp[i-2], dp[i-3]) + a[i];
    }
    return max(dp[n-1], dp[n-2]);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << steal(a, n) << "\n";
    }
}