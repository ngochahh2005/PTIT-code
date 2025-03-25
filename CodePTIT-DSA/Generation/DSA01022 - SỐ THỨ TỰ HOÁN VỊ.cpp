#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
vector<ll> f(10, 1);

void factorial() {
    for (int i = 2; i < 10; i++) {
        f[i] = f[i-1] * i;
    }
}

vector<int> a;
vector<ll> bit;
int n;

void update(int idx, int val) {
    while (idx <= n) {
        bit[idx] += val;
        idx += idx & -idx;
    }
}

ll getSum(int idx) {
    ll res = 0;
    while (idx > 0) {
        res += bit[idx];
        idx -= idx & -idx;
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    factorial();
    while (t--) {
        cin >> n;
        a.resize(n + 1);
        bit.assign(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        ll res = 1;
        for (int i = n; i >= 1; i--) {
            res += (ll)getSum(a[i] - 1) * f[n-i];
            update(a[i], 1);
        }
        cout << res << "\n";
    }
}