#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<set<int>> adj;
int n, m;
vector<bool> dd;
map<int, vector<int>> rs;

void bfs() {
    queue<int> qu;
    qu.push(1);
    dd[1] = true;
    rs[1] = {1};

    while (qu.size()) {
        int u = qu.front(); qu.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                rs[v] = rs[u];
                rs[v].push_back(v);
                qu.push(v);
            }
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
        adj.assign(n+5, set<int>());
        dd.assign(n+5, false);
        rs.clear();

        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].insert(v);
            adj[v].insert(u);
        }

        bfs();

        for (int i = 2; i <= n; i++) {
            if (adj[i].size() == 1) {
                for (auto x : rs[i]) {
                    cout << x << " ";
                }
                cout << "\n";
            }
        }
    }
}