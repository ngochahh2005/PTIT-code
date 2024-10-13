#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

ll sumMin(ll a, ll b) {
    ll x = 0, y = 0, dg, mu = 1;
    while (a > 0) {
        dg = a % 10;
        if (dg == 6) dg = 5;
        x = dg * mu + x;
        mu *= 10;
        a /= 10;
    }
    mu = 1;
    while (b > 0) {
        dg = b % 10;
        if (dg == 6) dg = 5;
        y = dg * mu + y;
        mu *= 10;
        b /= 10;
    }
    // cout << x << " " << y << "\n\n";
    return x + y;
}

ll sumMax(ll a, ll b) {
    ll x = 0, y = 0, dg, mu = 1;
    while (a > 0) {
        dg = a % 10;
        if (dg == 5) dg = 6;
        x = dg * mu + x;
        mu *= 10;
        a /= 10;
    }
    mu = 1;
    while (b > 0) {
        dg = b % 10;
        if (dg == 5) dg = 6;
        y = dg * mu + y;
        mu *= 10;
        b /= 10;
    }
    // cout << x << " " << y << "\n";
    return x + y;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll x1, x2;
        cin >> x1 >> x2;
        cout << sumMin(x1, x2) << " " << sumMax(x1, x2) << "\n";
    }
}