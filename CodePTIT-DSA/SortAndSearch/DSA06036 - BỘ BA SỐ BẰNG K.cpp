#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(int a[], int n, ll k) {
    for (int i = 0; i < n-2; i++) {
        int l = i+1, r = n-1;
        while (l < r) {
            ll x = (ll)a[i] + a[l] + a[r];
            if (x == k) return true;
            else if (x > k) r--;
            else l++;
        }
    }
    return false;
}
  
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        if (check(a, n, k)) cout << "YES\n";
        else cout << "NO\n";
    }
}