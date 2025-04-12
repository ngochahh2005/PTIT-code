#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int lps(string s) {
    int n = s.length(), rs = 1;
    vector< vector<bool> > dp(n, vector<bool>(n, 0));
    for (int i = 0; i < n; i++) dp[i][i] = true;
    for (int l = 1; l < n; l++) {
        for (int i = 0; i < n-l; i++) {
            int j = i + l;
            dp[i][j] = ((i + 1 > j - 1 || dp[i+1][j-1]) && s[i] == s[j]);
            if (dp[i][j]) rs = l + 1;
        }
    }
    return rs;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << lps(s) << "\n";
    }
}