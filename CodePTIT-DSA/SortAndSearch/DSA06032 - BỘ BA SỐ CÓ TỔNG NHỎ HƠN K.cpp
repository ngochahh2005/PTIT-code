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
        for (int i = 0; i < n-2; i++) {
            int l = i+1, r = n-1;
            while (l < r) {
                ll x = a[i] + a[l] + a[r];
                if (x < k) {
                    cnt += (r - l);
                    l++;
                } else {
                    r--;
                }
            }
        }
        cout << cnt << "\n";
    }
}