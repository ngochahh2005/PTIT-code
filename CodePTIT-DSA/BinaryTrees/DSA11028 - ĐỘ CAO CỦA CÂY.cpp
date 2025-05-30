#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj;
vector<bool> dd;
int n;

int bfs() {
    queue<pair<int, int>> qu;
    qu.push({1, 0});
    int rs = 0;
    dd[1] = true;

    while (qu.size()) {
        pair<int, int> u = qu.front(); qu.pop();
        rs = max(rs, u.second);

        for (int v : adj[u.first]) {
            if (!dd[v]) {
                dd[v] = true;
                qu.push({v, u.second + 1});
            }
        }
    }

    return rs;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        adj.assign(n+5, vector<int>());
        dd.assign(n+5, false);
        for (int i = 0; i < n-1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << bfs() << "\n";
    }
}