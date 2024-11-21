#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
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
        int a[n];
        ll b[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        b[0] = (ll)a[0] * a[1];
        b[n-1] = (ll)a[n-1] * a[n-2];
        for (int i = 1; i < n-1; i++) {
            b[i] = (ll)a[i-1] * a[i+1];
        }
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
    }
}