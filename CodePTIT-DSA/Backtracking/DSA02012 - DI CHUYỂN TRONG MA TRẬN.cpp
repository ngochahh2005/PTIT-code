#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, m, cnt = 0;
int a[105][105];
int dx[] = {1, 0};
int dy[] = {0, 1};

bool check(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m) return true;
    return false;
}

void dfs(int x, int y) {
    if (x == n-1 && y == m-1) {
        cnt++;
        return ;
    }
    for (int i = 0; i < 2; i++) {
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
        dfs(0, 0);
        cout << cnt << "\n";
    }
}