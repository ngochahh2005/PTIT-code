#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<int> adj[105];
bool dd[105];
int a[105][105];
int n, start, mi = INT_MAX, s = 0;
vector<vector<int>> rs;
vector<int> cycle;

void dfs(int u, int cnt) {
    if (s >= mi) return ;

    if (cnt == n) {
        for (int v : adj[u]) {
            if (v == start) {
                s += a[u][v];
                if (s < mi) {
                    mi = s;
                    rs.clear();
                    cycle.push_back(start);
                    rs.push_back(cycle);
                    cycle.pop_back();
                } else if (s == mi) {
                    cycle.push_back(start);
                    rs.push_back(cycle);
                    cycle.pop_back();
                }
                s -= a[u][v];
            }
        }
        return ;
    }

    for (int v : adj[u]) {
        if (!dd[v]) {
            dd[v] = true;
            cycle.push_back(v);
            s += a[u][v];
            dfs(v, cnt + 1);
            cycle.pop_back();
            dd[v] = false;
            s -= a[u][v];
        }
    }
}
  
int main() {
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    
    cin >> n >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (a[i][j] != 0 && a[i][j] != 10000) {
                adj[i].push_back(j);
            }
        }
    }

    dd[start] = true;
    cycle.push_back(start);
    dfs(start, 1);
    if (rs.empty()) cout << 0;
    else {
        cout << mi << "\n";
        for (int u = 0; u < rs.size(); u++) {
            for (int v : rs[u]) {
                cout << v << " ";
            }
            cout << "\n";
        }
    }
}