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
        vector<int> a;
        int n, k, tmp;
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        ll cnt = 0;
        for (int i = 1; i < n; i++) {
            int vt = upper_bound(a.begin(), a.end(), a[i] - k) - a.begin();
            // cout << a[i] << " - " << k << " = " << a[i] - k << " : " << i - vt << "\n";
            cnt += (i - vt);
        }
        cout << cnt << "\n";
        a.clear();
    }
}