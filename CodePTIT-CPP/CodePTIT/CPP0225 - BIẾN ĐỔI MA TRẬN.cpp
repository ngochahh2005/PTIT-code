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
        int a[n][n];
        int sr[n] = {0};
        int sc[n] = {0};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                sr[i] += a[i][j];
                sc[j] += a[i][j];
            }
        }
        int res = *max_element(sr, sr+n);
        res = max(res, *max_element(sc, sc+n));
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cnt += (res - sr[i]);
        }
        cout << cnt << "\n";
    }
}