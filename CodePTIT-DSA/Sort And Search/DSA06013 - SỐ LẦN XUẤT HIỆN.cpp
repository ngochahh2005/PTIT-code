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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int l = lower_bound(a, a+n, x) - a;
        int r = upper_bound(a, a+n, x) - a;
        if (r-l == 0) cout << "-1\n";
        else cout << r-l << "\n";
    }
}