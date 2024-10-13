#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int a[100][100];

void trenPhai(int, int, int, int);
void duoiTrai(int, int, int, int);

void trenPhai(int h1, int h2, int c1, int c2) {
    for (int i = c1; i <= c2; i++) {
        cout << a[h1][i] << " ";
    }
    for (int i = h1 + 1; i <= h2; i++) {
        cout << a[i][c2] << " ";
    }
    if (h1 < h2 && c1 < c2) duoiTrai(h1 + 1, h2, c1, c2 - 1);
}

void duoiTrai(int h1, int h2, int c1, int c2) {
    for (int i = c2; i >= c1; i--) {
        cout << a[h2][i] << " ";
    }
    for (int i = h2 - 1; i >= h1; i--) {
        cout << a[i][c1] << " ";
    }
    if (h1 < h2 && c1 < c2) trenPhai(h1, h2 - 1, c1 + 1, c2);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        trenPhai(0, n-1, 0, m-1);
        cout << "\n";
    }
}