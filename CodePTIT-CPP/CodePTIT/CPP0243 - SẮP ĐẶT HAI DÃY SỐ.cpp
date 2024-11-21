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
        int n, m, tmp;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            if (mp.find(tmp) != mp.end()) {
                for (int i = 0; i < mp[tmp]; i++) {
                    cout << tmp << " ";
                }
                mp.erase(tmp);
            }
        }
        for (auto x : mp) {
            for (int i = 0; i < x.second; i++) {
                cout << x.first << " ";
            }
        }
        cout << "\n";
    }
}