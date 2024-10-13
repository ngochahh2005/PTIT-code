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
        int n, q;
        cin >> n >> q;
        int a[n], s[n];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        a[0] = 0;
        for (int i = 1; i <= n; i++) {
            s[i] = s[i-1] + a[i];
        }
        while (q--) {
            int l, r;
            cin >> l >> r;
            cout << s[r] - s[l-1] << "\n";
        }
    }
}