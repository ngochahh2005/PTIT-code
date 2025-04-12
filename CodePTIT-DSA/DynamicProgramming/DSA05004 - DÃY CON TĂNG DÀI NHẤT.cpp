#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n], dp[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        dp[i] = 0;
    }
    dp[0] = 1;
    int ma = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) dp[i] = max(dp[i], dp[j] + 1);
        }
        ma = max(dp[i], ma);
    }
    cout << ma;
}