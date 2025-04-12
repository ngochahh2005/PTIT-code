#include <bits/stdc++.h>
#define ll long long
#define mod 123456789
#define lmt 1000000
using namespace std;

ll dac(ll n) {
    if (n == 1) return 2;
    if (n == 0) return 1;
    ll tmp = dac(n/2);
    if (n % 2 == 0) return tmp * tmp % mod;
    return 2 * (tmp * tmp % mod) % mod;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << dac(n-1) << "\n";
    }
}