#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, u, v;
int a[105][105];
vector<vector<int>> vec(105);
vector<int> rs;
int dd[105];
bool found = false;

int countPaths() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if(a[u][i] && a[i][v]) cnt++;
    }
    return cnt;
}

void dfs(int x) {
    if (found) return ;
    dd[x] = true;
    rs.push_back(x);

    if (x == v) {
        found = true;
        return ;
    }

    for (int y : vec[x]) {
        if (!dd[y]) {
            dfs(y);
            if (found) return ;
        }
    }

    rs.pop_back();
}
  
int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    int t;
    fi >> t >> n >> u >> v;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> a[i][j];
            if (a[i][j]) vec[i].push_back(j);
        }
    }

    if (t == 1) fo << countPaths();
    else {
        dfs(u);
        if (found) for (int x : rs) fo << x << " ";
        else cout << 0;
    }
    
    fi.close();
    fo.close();
}