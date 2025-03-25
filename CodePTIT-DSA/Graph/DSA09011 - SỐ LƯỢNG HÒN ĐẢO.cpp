#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, m, cnt = 0;
int a[505][505];
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

bool check(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m && a[x][y]) return true;
    return false;
}

void dfs(int x, int y) {
    a[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (check(X, Y)) dfs(X, Y);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}