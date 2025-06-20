#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int n;
vector<vector<int>> adj;
vector<bool> dd;
vector<pii> rs;

void bfs(int x, int s, int t) {
    queue<int> qu;
    qu.push(x);
    dd[x] = true;

    while (qu.size()) {
        int u = qu.front(); qu.pop();

        for (int v : adj[u]) {
            if ((u == s && v == t) || (u == t && v == s)) continue;
            if (!dd[v]) {
                dd[v] = true;
                qu.push(v);
            }
        }
    }
}

int connected(int s, int t) {
    int cnt = 0;
    dd.assign(n+5, false);
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) {
            cnt++;
            bfs(i, s, t);
        }
    }
    return cnt;
}

void canhcau() {
    int cnt1 = connected(0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j : adj[i]) {
            if (i >= j) continue;
            int cnt2 = connected(i, j);
            if (cnt1 != cnt2) rs.push_back({i, j});
        }
    }
}

int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    fi >> n;
    int tmp;
    adj.assign(n+5, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> tmp;
            if (tmp) adj[i].push_back(j);
        }
    }

    canhcau();
    fo << rs.size() << "\n";
    for (auto x : rs) fo << x.first << " " << x.second << "\n";
    
    fi.close();
    fo.close();
}