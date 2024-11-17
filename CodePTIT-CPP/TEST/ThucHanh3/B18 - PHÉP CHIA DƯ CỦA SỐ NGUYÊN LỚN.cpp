#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

ll solve(string s, ll m) {
    ll k = 0;
    ll mu = 1;
    for (int i = s.length() - 1; i >= 0; i--) {
        ll dg = s[i] - '0';
        k = ((k % m) + (((dg % m) * (mu % m)) % m)) % m;
        mu = ((mu % m) * (10 % m)) % m;
    }
    return k;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string n;
        ll m;
        cin >> n >> m;
        cout << solve(n, m) << "\n";
    }
}