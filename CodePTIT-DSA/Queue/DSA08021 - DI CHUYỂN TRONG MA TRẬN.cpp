#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[1005][1005];
bool dd[1005][1005];
int m, n;

struct state {
    int x, y, cnt;
};

int bfs() {
    queue<state> qu;
    qu.push({0, 0, 0});
    dd[0][0] = true;
    
    while (qu.size()) {
        state tmp = qu.front(); qu.pop();
        int x = tmp.x;
        int y = tmp.y;
        int cnt = tmp.cnt;
        if (x == m-1 && y == n-1) return cnt;

        int jmp = a[x][y];
        int X = x;
        int Y = y + jmp;
        if (Y < n && !dd[X][Y]) {
            dd[X][Y] = true;
            qu.push({X, Y, cnt + 1});
        }

        X = x + jmp;
        Y = y;
        if (X < m && !dd[X][Y]) {
            dd[X][Y] = true;
            qu.push({X, Y, cnt + 1});
        }
    }
    return -1;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                dd[i][j] = false;
            }
        }
        int rs = bfs();
        cout << rs << "\n";
    }
}