#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    ll tmp;
    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp >= 0 && tmp < n) mp[tmp]++;
        }
        for (int i = 0; i < n; i++) {
            if (mp.find(i) != mp.end()) cout << i << " ";
            else cout << "-1 ";
        }
        cout << "\n";
    }
}