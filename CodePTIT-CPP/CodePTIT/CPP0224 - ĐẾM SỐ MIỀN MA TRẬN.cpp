#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int dx[] = {-1, -1, -1,  0, 0,  1, 1, 1};
int dy[] = {-1,  0,  1, -1, 1, -1, 0, 1};
int a[105][105];
int n, m;

bool check(int x, int y) {
    if (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == 1) 
        return true;
    return false;
}

void dfs(int x, int y) {
    a[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (check(newX, newY)) dfs(newX, newY);
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
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (check(i, j)) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}