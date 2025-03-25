#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int dp[1005][1005];

int bigNum(string a, string b) {
    int l1 = a.size(), l2 = b.size();
    for (int i = 1; i <= l1; i++) {
        for (int j = 1; j <= l2; j++) {
            if (a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[l1][l2];
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        cout << bigNum(a, b) << "\n";
    }
}