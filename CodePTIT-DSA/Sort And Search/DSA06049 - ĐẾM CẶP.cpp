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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        ll cnt = 0;
        sort(a, a+n);
        for (int i = 0; i < n; i++) {
            int idx = lower_bound(a+i+1, a+n, a[i] + k) - (a+i+1);
            cnt += idx;
        }
        cout << cnt << "\n";
    }
}