#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj;
int n;
vector<bool> dd;

int bfs(int x, int y) {
    dd.assign(n+5, false);
    queue<pair<int,int>> qu;
    qu.push({x, 0});
    dd[x] = true;

    while (qu.size()) {
        pair<int, int> u = qu.front(); qu.pop();
        if (u.first == y) return u.second;
        for (int v : adj[u.first]) {
            if (!dd[v]) {
                dd[v] = true;
                qu.push({v, u.second + 1});
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
        adj.assign(n+5, vector<int>());
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int q;
        cin >> q;
        while (q--) {
            int u, v;
            cin >> u >> v;
            cout << bfs(u, v) << "\n";
        }
    }
}