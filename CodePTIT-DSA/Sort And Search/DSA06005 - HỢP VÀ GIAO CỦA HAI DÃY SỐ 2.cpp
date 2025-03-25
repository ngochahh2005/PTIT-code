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
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        for (auto x : mp) {
            cout << x.first << " ";
        }
        cout << "\n";
        for (auto x : mp) {
            if (x.second > 1) cout << x.first << " ";
        }
        cout << "\n";
    }
}