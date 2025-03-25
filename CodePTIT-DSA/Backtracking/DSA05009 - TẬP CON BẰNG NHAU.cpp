#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(int a[], int n, int tg) {
    vector<bool> dp(n+1, false);
    dp[0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = tg; j >= a[i]; j--) {
            if (dp[j - a[i]]) dp[j] = true;
        }
    }
    return dp[tg];
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
        int a[n], s = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        if (s % 2 != 0) cout << "NO\n";
        else {
            if (check(a, n, s/2)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}