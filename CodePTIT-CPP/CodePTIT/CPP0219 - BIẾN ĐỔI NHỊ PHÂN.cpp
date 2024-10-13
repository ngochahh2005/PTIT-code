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
        int n, m;
        cin >> n >> m;
        int a[n][m], h[n], c[m];
        fill(h, h+n, 0);
        fill(c, c+m, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    h[i] = 1;
                    c[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (h[i] == 1) {
                for (int j = 0; j < m; j++) {
                    a[i][j] = 1;
                }
            }
        }
        for (int j = 0; j < m; j++) {
            if (c[j] == 1) {
                for (int i = 0; i < n; i++) {
                    a[i][j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}