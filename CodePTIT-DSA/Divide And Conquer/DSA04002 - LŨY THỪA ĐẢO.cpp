#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll dac(ll a, ll b) {
    if (b == 1) return a;
    if (b == 0) return 1;
    ll tmp = dac(a, b/2) % mod;
    if (b % 2 == 0) return tmp * tmp % mod;
    return a * (tmp * tmp % mod) % mod;
}

ll Reverse(ll n) {
    ll rs = 0;
    while (n > 0) {
        rs = rs * 10 + (n % 10);
        n /= 10;
    }
    return rs;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a;
        b = Reverse(a);
        cout << dac(a, b) << "\n";
    }
}