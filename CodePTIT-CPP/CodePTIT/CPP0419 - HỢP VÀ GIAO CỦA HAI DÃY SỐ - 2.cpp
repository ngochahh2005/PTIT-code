#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        map<int, int> mp;
        int n, m, tmp;
        cin >> n >> m;
        for (int i = 0; i < n+m; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        for (pair<int, int> it : mp) {
            cout << it.first << " ";
        }
        cout << "\n";
        for (pair<int, int> it : mp) {
            if (it.second == 2) cout << it.first << " ";
        }
        cout << "\n";
    }
}