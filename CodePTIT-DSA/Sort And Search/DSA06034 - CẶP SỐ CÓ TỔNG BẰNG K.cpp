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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll cnt = 0;
        for (int i = 0; i < n; i++) {
            if (k - a[i] < 0) break;
            int l = lower_bound(a+i+1, a+n, k-a[i]) - a;
            int r = upper_bound(a+i+1, a+n, k-a[i]) - a;
            cnt += (r-l);
        }
        cout << cnt << "\n";
    }
}