#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
ll a[lmt+5], bit[lmt+5];

void nen() {
    vector<ll> b;
    for (int i = 1; i <= n; i++) b.push_back(a[i]);
    sort(b.begin(), b.end());
    b.resize(unique(b.begin(), b.end()) - b.begin());
    for (int i = 0; i < n; i++) {
        a[i+1] = lower_bound(b.begin(), b.end(), a[i+1]) - b.begin() + 1;
    }
}

void update(ll i, ll x) {
    while (i <= n) {
        bit[i] += x;
        i += i & -i;
    }
}

ll getSum(ll i) {
    ll rs = 0;
    while (i > 0) {
        rs += bit[i];
        i -= i & -i;
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
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            bit[i] = 0;
        }
        nen();
        ll rs = 0;
        for (int i = n; i >= 1; i--) {
            rs += getSum(a[i] - 1);
            update(a[i], 1);
        }
        cout << rs << "\n";
    }
}