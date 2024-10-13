#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, x, y;
        cin >> a >> x >> y;
        ll tmp = __gcd(x, y);
        for (int i = 0; i < tmp; i++) cout << a;
        cout << "\n";
    }
}