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
        int l[n], r[n];
        l[0] = a[0];
        for (int i = 1; i < n; i++) {
            l[i] = l[i-1] + a[i];
        }
        r[n-1] = a[n-1];
        for (int i = n-2; i >= 0; i--) {
            r[i] = r[i+1] + a[i];
        }
        bool ck = false;
        for (int i = 0; i < n; i++) {
            if (l[i] == r[i]) {
                cout << i+1 << "\n";
                ck = true;
                break;
            }
        }
        if (!ck) cout << "-1\n";
    }
}