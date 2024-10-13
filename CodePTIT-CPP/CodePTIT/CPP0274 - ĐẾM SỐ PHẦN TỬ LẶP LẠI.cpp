#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp, cnt = 0;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        for (auto x : mp) {
            if (x.second > 1) cnt += x.second;
        }
        cout << cnt << "\n";
    }
}