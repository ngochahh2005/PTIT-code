#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll dac(ll a, ll b) {
    if (b == 1) return a;
    if (b == 0) return 1;
    ll tmp = dac(a, b/2);
    if (b % 2 == 0) return tmp * tmp;
    return a * tmp * tmp;
}

ll Find(ll n, ll k) {
    ll mid = dac(2, n-1);
    if (k == mid) return n;
    if (k < mid) return Find(n-1, k);
    return Find(n-1, k-mid);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }
}