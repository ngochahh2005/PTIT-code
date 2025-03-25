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
        ll *a, *b;
        a = new ll[n];
        b = new ll[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n, greater<ll>());
        ll rs = 0;
        for (int i = 0; i < n; i++) {
            rs += a[i] * b[i];
        }
        cout << rs << "\n";
    }
}