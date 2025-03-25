#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], s = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];
        }
        if (k <= n/2) sort(a, a+n);
        else sort(a, a+n, greater<int>());
        int d = 0;
        for (int i = 0; i < k; i++) d += a[i];
        cout << abs(d - (s-d)) << "\n";
    }
}