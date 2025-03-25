#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll dp[1005][1005];

void toHop() {
    for (int i = 0; i <= 1000; i++) {
        dp[0][i] = 1;
    }
    for (int j = 1; j <= 1000; j++) {
        for (int i = 1; i <= j; i++) {
            if (i == j) dp[i][j] = 1;
            else dp[i][j] = (dp[i][j-1] % mod + dp[i-1][j-1] % mod) % mod;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    toHop();
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << dp[k][n] << "\n";
    }
}