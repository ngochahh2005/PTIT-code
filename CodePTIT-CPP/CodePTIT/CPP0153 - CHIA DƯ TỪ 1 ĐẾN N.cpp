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
        int n;
        ll k;
        cin >> n >> k;
        ll s = 0;
        for (int i = 1; i <= n; i++) {
            s += i % k;
        }
        cout << s << "\n";
    }
}