#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int a[lmt], b[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+m);
        cout << (ll)a[n-1] * b[0] << "\n";
    }
}