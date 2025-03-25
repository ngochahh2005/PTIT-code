#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
int a[15][15];
int dx[] = {1, 0};
int dy[] = {0, 1};
bool ck = false;

bool check(int x, int y) {
    if(x >= 0 && x < n && y >= 0 && y < n && a[x][y] == 1) return true;
    return false;
}
  
void dfs(int x, int y, string s) {
    if (x == n-1 && y == n-1) {
        cout << s << " ";
        ck = true;
        return ;
    }
    for (int i = 0; i < 2; i++) {
        int newX = x + dx[i];
        int newY = y + dy[i];
        if (check(newX, newY)) {
            if (dx[i] == 1 && dy[i] == 0) dfs(newX, newY, s + "D");
            else dfs(newX, newY, s + "R");;
            
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
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        ck = false;
        if (a[0][0] == 0) cout << "-1\n"; 
        else {
            dfs(0, 0, "");
            if (!ck) cout << "-1\n"; 
        }
        
        cout << "\n";
    }
}