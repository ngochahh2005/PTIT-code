#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int a[25][25], vl[405];

void trenPhai(int, int, int, int, int);
void duoiTrai(int, int, int, int, int);

void trenPhai(int h1, int h2, int c1, int c2, int cnt) {
    for (int i = c1; i <= c2; i++) {
        a[h1][i] = vl[cnt++];
    }
    for (int i = h1 + 1; i <= h2; i++) {
        a[i][c2] = vl[cnt++];
    }
    if (c1 < c2 && h1 < h2) duoiTrai(h1 + 1, h2, c1, c2 - 1, cnt);
}

void duoiTrai(int h1, int h2, int c1, int c2, int cnt) {
    for (int i = c2; i >= c1; i--) {
        a[h2][i] = vl[cnt++];
    }
    for (int i = h2 - 1; i >= h1; i--) {
        a[i][c1] = vl[cnt++];
    }
    if (c1 < c2 && h1 < h2) trenPhai(h1, h2 - 1, c1 + 1, c2, cnt);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m;
    cin >> n;
    m = n*n;
    for (int i = 0; i < m; i++) {
        cin >> vl[i];
    }
    sort(vl, vl+m);
    trenPhai(0, n-1, 0, n-1, 0);
    // for (int i = 0; i < m; i++) cout << vl[i] << " ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
}