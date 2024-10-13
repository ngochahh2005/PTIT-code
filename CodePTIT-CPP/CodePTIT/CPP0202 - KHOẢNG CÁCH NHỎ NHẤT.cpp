#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int res = 1e9;
        for (int i = 1; i < n; i++) {
            res = min(res, a[i] - a[i-1]);
        }
        cout << res << "\n";
    }
}