#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int decode(string s) {
    int l = s.length();
    vector<int> dp(l+5, 0);
    dp[0] = 1;
    dp[1] = (s[0] == '0') ? 0 : 1;
    for (int i = 2; i <= l; i++) {
        if (s[i-1] != '0') dp[i] += dp[i-1];
        int tmp = stoi(s.substr(i-2, 2));
        if (tmp >= 10 && tmp <= 26) dp[i] += dp[i-2];
    }
    return dp[l];
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
        cout << decode(s) << "\n";
    }
}