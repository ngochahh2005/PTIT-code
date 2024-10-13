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
        int n, tmp, ma = 0, mi = 1000;
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            se.insert(tmp);
            ma = max(ma, tmp);
            mi = min(mi, tmp);
        }
        int cnt = 0;
        for (int i = mi; i <= ma; i++) {
            if (se.find(i) == se.end()) cnt++;
        }
        cout << cnt << "\n";
    }
}