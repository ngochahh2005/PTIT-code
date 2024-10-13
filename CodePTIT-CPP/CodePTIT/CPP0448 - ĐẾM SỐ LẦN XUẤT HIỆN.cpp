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
        int n, x, cnt = 0, tmp;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp == x) cnt++;
        }
        if (cnt > 0) cout << cnt << "\n";
        else cout << "-1\n";
    }
}