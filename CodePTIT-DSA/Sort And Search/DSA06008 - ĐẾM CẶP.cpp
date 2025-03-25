#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll solve(int a[], int n, int b[], int m) {
    ll cnt = 0;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;
        if (a[i] == 1) {
            l = lower_bound(b, b+m, 0) - b;
            r = upper_bound(b, b+m, 0) - b;
            cnt += (r-l);
        } else if (a[i] == 2) {
            l = lower_bound(b, b+m, 2) - b;
            r = upper_bound(b, b+m, 4) - b;
            cnt += (m-r+l);
        } else if (a[i] == 3) {
            l = lower_bound(b, b+m, 3) - b;
            r = upper_bound(b, b+m, 3) - b;
            cnt += (m-r+l);
        } else {
            l = lower_bound(b, b+m, 2) - b;
            r = upper_bound(b, b+m, a[i]) - b;
            cnt += (m-r+l);
        }
    }
    return cnt;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, tmp;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+m);
        cout << solve(a, n, b, m) << "\n";
    }
}