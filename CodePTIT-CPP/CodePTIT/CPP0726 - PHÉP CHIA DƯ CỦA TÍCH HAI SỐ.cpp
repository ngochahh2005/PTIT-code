#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll cdt(ll a, ll b, ll c) {
    if (b == 0) return 0;
    ll t = cdt(a, b/2, c) % c;
    if (b % 2 == 0) return (2 * t) % c;
    return (a % c + 2 * t) % c;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        cout << cdt(a, b, c) << "\n";
    }
}