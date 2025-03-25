#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int dp[105][105][105];

int max3(int a, int b, int c) {
    return max(a, max(b, c));
}

int lcs(string s1, string s2, string s3, int n1, int n2, int n3) {
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            for (int k = 1; k <= n3; k++) {
                if (s1[i-1] == s2[j-1] && s1[i-1] == s3[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
                else dp[i][j][k] = max3(dp[i-1][j][k], dp[i][j-1][k], dp[i][j][k-1]);
            }
        }
    }
    return dp[n1][n2][n3];
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << lcs(s1, s2, s3, n1, n2, n3) << "\n";
    }
}