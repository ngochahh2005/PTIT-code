#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll dp[105][15], rs[105];

void Sort() {
    for (int i = 0; i <= 9; i++) {
        dp[1][i] = 1;
        if (i == 0) {
            rs[1] = 1;
        } else {
            dp[2][i] = 10 - i;
            rs[1] += dp[1][i];
            rs[2] += dp[2][i];
        }
    }
    rs[2] += rs[1];
    for (int i = 3; i <= 100; i++) {
        rs[i] = rs[i-1];
        for (int j = 1; j <= 9; j++) {
            for (int k = j; k <= 9; k++) {
                dp[i][j] = ((dp[i][j] % mod) + (dp[i-1][k] % mod)) % mod;
            }
            rs[i] = ((rs[i] % mod) + (dp[i][j] % mod)) % mod;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Sort();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << rs[n] << "\n";
    }
}