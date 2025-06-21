#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, u, v;
int a[105][105];
vector<vector<int>> adj;
vector<int> rs;
bool dd[105];
  
int countPaths() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] && a[i][v]) cnt++;
    }
    return cnt;
}

void bfs() {
    queue<int> qu;
    vector<int> par(n+5, 0);
    qu.push(u);
    dd[u] = true;

    while (qu.size() && qu.front() != v) {
        int x = qu.front(); qu.pop();
        for (int i = 0; i < adj[x].size(); i++) {
            int y = adj[x][i];
            if (!dd[y]) {
                dd[y] = true;
                par[y] = x;
                qu.push(y);
            }
        }
    }
    while (v != u) {
        rs.push_back(v);
        v = par[v];
    }
   rs.push_back(u);
}

int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");

    int t;
    fi >> t >> n >> u >> v;
    adj.assign(n+5, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> a[i][j];
            if (a[i][j]) adj[i].push_back(j);
        }
    } 

    if (t == 1) {
        fo << countPaths();
    } else {
        bfs();
        for (int i = rs.size() - 1; i >= 0; i--) fo << rs[i] << " ";
    }
    
    fi.close();
    fo.close();
}