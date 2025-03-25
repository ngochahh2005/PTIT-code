#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void phanSoDV(ll p, ll q) {
    if (q % p == 0) {
        cout << "1/" << q / p;
        return ;
    }
    ll m = q / p + 1;
    ll mc = m / __gcd(m, q) * q;
    p *= mc / q;
    p -= mc / m;
    cout << "1/" << m << " + ";
    phanSoDV(p, mc);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll p, q;
        cin >> p >> q;
        phanSoDV(p, q);
        cout << "\n";
    }
}