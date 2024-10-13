#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

ll cdt(ll a, ll b, ll mod) {
    if (b == 0) return 1;
    ll x = cdt(a, b/2, mod) % mod;
    if (b % 2 == 0) return (x * x) % mod;
    return ((a % mod) * ((x * x) % mod)) % mod;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << cdt(x, y, p) << "\n";
    }
}