#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m;
    int b[m][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> b[i][j];
        }
    }
    int k = 0, d;
    for (int i = 0; i < n; i++) {
        d = 0;
        for (int j = 0; j < n; j++) {
            cout << a[i][j] * b[k][d] << " ";
            d++;
            d %= m;
        }
        cout << "\n";
        k++;
        k %= m;
    }
}