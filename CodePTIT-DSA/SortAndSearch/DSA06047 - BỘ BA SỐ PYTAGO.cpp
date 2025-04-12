#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(ll a[], int n) {
    for (int i = 0; i < n; i++) a[i] = a[i] * a[i];
    sort(a, a+n);
    for (int i = n-1; i >= 2; i--) {
        int l = 0, r = i-1;
        while (l < r) {
            if (a[l] + a[r] == a[i]) return true;
            else if (a[l] + a[r] < a[i]) l++;
            else r--;
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
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        if (check(a, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}