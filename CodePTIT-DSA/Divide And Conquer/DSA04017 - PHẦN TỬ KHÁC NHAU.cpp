#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;

int Find(ll a[], ll b[], int l, int r) {
    if (l == r) {
        if (l == n-2) return n;
        return l+1;
    }
    int m = (l+r)/2;
    if (a[m] == b[m]) return Find(a, b, m+1, r);
    return Find(a, b, l, m);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ll *a, *b;
        a = new ll[n];
        b = new ll[n-1];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++) cin >> b[i];
        cout << Find(a, b, 0, n-2) << "\n";
    }
}