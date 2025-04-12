#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, m, cnt = 0;
char a[1005][1005];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

bool check(int x, int y) {
    return (x >= 0 && y >= 0 && x < n && y < m && a[x][y] == '#');
}

void dfs(int x, int y) {
    a[x][y] = '.';
    for (int i = 0; i < 4; i++) {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (check(X, Y)) dfs(X, Y);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int rs = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (check(i, j)) {
                dfs(i, j);
                rs++;
            }
        }
    }
    cout << rs;
}