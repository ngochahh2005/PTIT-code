#include <bits/stdc++.h>
#define ll long long
#define lmt 10000
using namespace std;

ll gcd(ll a, ll b) {
    if (a < b) swap(a, b);
    if (a % b == 0) return b;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b) {
    return (ll)a/gcd(a, b) * b;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll res = 1;
        for (int i = 1; i <= n; i++) {
        	res = lcm(res, (ll)i);
		}
		cout << res << "\n";
    }
}
