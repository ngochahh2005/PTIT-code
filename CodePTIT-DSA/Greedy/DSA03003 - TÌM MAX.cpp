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
        int n;
        cin >> n;
        int *a;
        a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll rs = 0;
        for (int i = 0; i < n; i++) {
            rs = ((rs % mod) + ((a[i] * i) % mod)) % mod;
        }
        cout << rs << "\n";
    }
}