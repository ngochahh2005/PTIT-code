#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

ll chiaDu(string n, ll m) {
    ll kq = 0;
    for (int i = 0; i < n.length(); i++) {
        kq = kq * 10 + (n[i] - '0');
        kq %= m;
    }
    return kq;
}

ll cdt(ll a, ll b, ll m) {
    if (b == 0) return 1;
    ll tmp = cdt(a, b/2, m) % m;
    if (b % 2 == 0) return (tmp * tmp) % m;
    return ((a % m) * ((tmp * tmp) % m)) % m;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll a, b, m;
        cin >> s >> b >> m;
        a = chiaDu(s, m);
        // cout << a << "\n";
        cout << cdt(a, b, m) << "\n";
    }
}