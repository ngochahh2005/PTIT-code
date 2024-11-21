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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for (int i = 0; i < n/2; i++) {
            cout << b[i] << " " << a[i] << " ";
        }
        if (n % 2 != 0) cout << a[n/2];
        cout << "\n";
    }
}