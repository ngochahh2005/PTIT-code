#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll cdt(ll a, ll b) {
    if (b == 0) return 1;
    ll x = cdt(a, b/2) % mod;
    if (b % 2 == 0) return (x * x) % mod;
    return ((a % mod) * (x * x % mod)) % mod;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x, tmp;
        cin >> n >> x;
        ll res = 0;
        for (int i = n-1; i >= 0; i--) {
            cin >> tmp;
            res = ((res % mod) + (tmp % mod) * (cdt(x, i) % mod)) % mod;
        }
        cout << res << "\n";
    }
}