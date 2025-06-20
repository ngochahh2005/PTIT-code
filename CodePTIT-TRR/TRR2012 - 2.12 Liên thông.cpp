#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj;
vector<bool> dd;
vector<vector<int>> rs;

void bfs(int x, int i) {
    queue<int> qu;
    qu.push(x);
    dd[x] = true;
    rs[i].push_back(x);

    while (qu.size()) {
        int u = qu.front(); qu.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                rs[i].push_back(v);
                qu.push(v);
            }
        }
    }
    sort(rs[i].begin(), rs[i].end());
}
  
int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    int n, t;
    fi >> n;
    adj.assign(n+5, vector<int>());
    dd.assign(n+5, false);
    rs.assign(n+5, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> t;
            if (t) adj[i].push_back(j);
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) {
            bfs(i, cnt);
            cnt++;
        }
    }

    fo << cnt << "\n";
    for (int i = 0; i < cnt; i++) {
        for (int j : rs[i]) {
            fo << j << " ";
        }
        fo << "\n";
    }
    
    fi.close();
    fo.close();
}