#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, a[10][10];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
char c[] = {'D', 'R', 'U', 'L'};

bool check(int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1) return true;
    return false;
}

void dfs(int x, int y, string s, vector<string> &rs) {
    if (x == n-1 && y == n-1) {
        rs.push_back(s);
        return ;
    }
    a[x][y] = 0;
    for (int i = 0; i < 4; i++) {
        int X = x + dx[i];
        int Y = y + dy[i];
        if (check(X, Y)) dfs(X, Y, s + c[i], rs);
    }
    a[x][y] = 1;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        vector<string> rs;
        dfs(0, 0, "", rs);
        if (rs.size() == 0 || a[0][0] == 0) cout << "-1";
        else {
            sort(rs.begin(), rs.end());
            for (string x : rs) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
}