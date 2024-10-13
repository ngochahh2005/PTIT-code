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
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        int vl = -1, tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
            if (mp[tmp] > 1 && vl == -1) vl = tmp;
        }
        cout << vl << "\n";
    }
}