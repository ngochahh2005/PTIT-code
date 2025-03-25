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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll n1 = 0, n2 = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) n1 = n1*10 + a[i];
            else n2 = n2*10 + a[i];
        }
        cout << n1 + n2 << "\n";
    }
}