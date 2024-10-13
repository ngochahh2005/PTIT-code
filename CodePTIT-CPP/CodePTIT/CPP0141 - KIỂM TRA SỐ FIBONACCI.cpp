#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (binary_search(f, f+93, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}