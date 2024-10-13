#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int digit(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 10;
    }
    return cnt;
}

ll bcnn(ll x, ll y) {
    return (ll)x / __gcd(x, y) * y;
}

ll solve(int x, int y, int z, int n) {
    ll lcm = bcnn(bcnn((ll)x, (ll)y), (ll)z);
    ll tmp = (ll)pow(10, n);
    ll a = (ll)pow(10, n-1);
    ll res = (a + lcm - 1) / lcm * lcm;
    return (res < tmp) ? res : -1;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        cout << solve(x, y, z, n) << "\n";
    }
}