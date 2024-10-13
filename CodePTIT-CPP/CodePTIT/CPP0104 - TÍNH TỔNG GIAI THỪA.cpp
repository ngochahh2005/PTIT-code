#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    ll res = 0, s = 1;
    for (int i = 1; i <= n; i++) {
        s *= (ll)i;
        res += s;
    }
    cout << res;
}