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
        int n, m, tmp;
        cin >> n >> m;
        int mi = INT_MAX, ma = INT_MIN;
        ll rs = 1;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            ma = max(ma, tmp);
        }
        rs *= ma;
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            mi = min(mi, tmp);
        }
        rs *= mi;
        cout << rs << "\n";
    }
}