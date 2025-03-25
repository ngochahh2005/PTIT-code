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
        int mi = INT_MAX;
        for (int i = 1; i < n; i++) {
            mi = min(mi, a[i] - a[i-1]);
        }
        cout << mi << "\n";
    }
}