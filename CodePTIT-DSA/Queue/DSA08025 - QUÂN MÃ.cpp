#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int col(string s) {
    return s[0] - 'a';
}

int row(string s) {
    return s[1] - '0' - 1;
}

struct state {
    int x, y, steps;
};

int dx[] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1, -2, 2, -2, 2};

bool check(int x, int y) {
    if (x >= 0 && x < 8 && y >= 0 && y < 8) return true;
    return false;
}

int bfs(int x, int y, int u, int v) {
    queue<state> qu;
    qu.push({x, y, 0});
    vector< vector<bool> > dd(8, vector<bool>(8, false));
    while (true) {
        state tmp = qu.front(); qu.pop();
        if (tmp.x == u && tmp.y == v) return tmp.steps;
        if (dd[tmp.x][tmp.y]) continue;
        for (int i = 0; i < 8; i++) {
            int X = tmp.x + dx[i];
            int Y = tmp.y + dy[i];
            if (check(X, Y)) qu.push({X, Y, tmp.steps + 1});
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string xy, uv;
        cin >> xy >> uv;
        int x = row(xy), y = col(xy);
        int u = row(uv), v = col(uv);
        cout << bfs(x, y, u ,v) << "\n";
    }
}