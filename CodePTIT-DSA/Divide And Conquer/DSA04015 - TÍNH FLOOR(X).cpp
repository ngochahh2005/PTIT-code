#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int Floor(ll a[], int l, int r, ll x) {
    if (l == r) {
        if (a[l] > x) return -1;
        return l+1;
    }
    int m = (l+r+1)/2;
    if (a[m] <= x) return Floor(a, m, r, x);
    return Floor(a, l, m-1, x);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;
        ll *a;
        a = new ll[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << Floor(a, 0, n-1, x) << "\n";
    }
}