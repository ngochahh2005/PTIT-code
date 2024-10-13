#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

ll chiaDu(string n, ll m) {
    ll kq = 0;
    for (int i = 0; i < n.length(); i++) {
        kq = kq * 10 + (n[i] - '0');
        kq %= m;
    }
    return kq;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        ll m;
        cin >> m;
        cout << chiaDu(n, m) << "\n";
    }
}