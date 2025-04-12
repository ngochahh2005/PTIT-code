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
        double a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
        }
        vector<int> dp(n, 1);
        int rs = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < i; j++) {
                if (a[j] < a[i] && b[j] > b[i]) dp[i] = max(dp[i], dp[j] + 1);
            }
            rs = max(rs, dp[i]);
        }
        cout << rs << "\n";
    }
}