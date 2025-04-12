#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll power(ll a, ll b) {
    if (b == 1) return a;
    if (b == 0) return 1;
    ll tmp = power(a, b/2) % mod;
    if (b % 2 == 0) return tmp * tmp % mod;
    return (a % mod) * (tmp * tmp % mod) % mod;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (true) {
        ll a, b;
        cin >> a >> b;
        if (a == b && b == 0) return 0;
        cout << power(a, b) << "\n"; 
    }
}