#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
ll lis(int a[], int n) {
    vector<int> dp(n, 0);
    vector<int> s(n, 0);
    int rs = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        s[i] = a[i];
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
                s[i] = max(s[i], s[j] + a[i]);
            }
        }
        rs = max(rs, s[i]);
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << lis(a, n) << "\n";
    }
}