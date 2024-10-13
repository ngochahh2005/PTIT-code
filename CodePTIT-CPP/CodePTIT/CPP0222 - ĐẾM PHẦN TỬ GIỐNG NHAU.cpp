#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int a[100][100];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int tmp;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            set<int> se;
            for (int j = 0; j < n; j++) {
                cin >> tmp;
                if (se.find(tmp) != se.end()) continue;
                se.insert(tmp);
                mp[tmp]++;
            }
            // se.clear();
        }
        int cnt = 0;
        for (auto x : mp) {
            // cout << x.first << " " << x.second << "\n";
            if (x.second == n) cnt++;
        }
        cout << cnt << "\n";
    }
}