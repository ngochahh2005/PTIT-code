#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int dp[105][25005];
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int c, n;
    cin >> c >> n;
    int w[n+5];
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    sort(w, w+n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= c; j++) {
            if (w[i] > j) dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else dp[i][j] = max(dp[i-1][j-w[i]] + w[i], max(dp[i-1][j], dp[i][j-1]));
        }
    }
    cout << dp[n][c];
}