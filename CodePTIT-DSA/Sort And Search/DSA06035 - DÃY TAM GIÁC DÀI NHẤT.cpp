#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
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
        int t[n], g[n];
        t[0] = 1;
        for (int i = 1; i < n; i++) {
            if (a[i-1] < a[i]) t[i] = t[i-1] + 1;
            else t[i] = 1;
        }
        g[n-1] = 1;
        for (int i = n-2; i >= 0; i--) {
            if (a[i] > a[i+1]) g[i] = g[i+1] + 1;
            else g[i] = 1;
        }
        int rs = 0;
        for (int i = 0; i < n; i++) {
            rs = max(t[i] + g[i] - 1, rs);
        }
        cout << rs << "\n";
    }
}