#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int dp[1005][1005];

struct bag {
    int w, vl;
};

int max3(int a, int b, int c) {
    return max(a, max(b, c));
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, v;
        cin >> n >> v;
        bag a[n+5];
        for (int i = 1; i <= n; i++) cin >> a[i].w;
        for (int i = 1; i <= n; i++) cin >> a[i].vl;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= v; j++) {
                if (j < a[i].w) dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                else dp[i][j] = max3(dp[i-1][j], dp[i][j-1], dp[i-1][j - a[i].w] + a[i].vl);
            }
        }
        cout << dp[n][v] << "\n";
    }
}