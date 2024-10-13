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
        int n, tmp;
        cin >> n;
        n--;
        set<int> se;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp > 0) se.insert(tmp);
        }
        int cnt = 1;
        bool ck = false;
        for (auto x : se) {
            if (x != cnt) {
                cout << cnt << "\n";
                ck = true;
                break;
            }
            cnt++;
        }
        if (!ck) cout << n+1 << "\n";
    }
}