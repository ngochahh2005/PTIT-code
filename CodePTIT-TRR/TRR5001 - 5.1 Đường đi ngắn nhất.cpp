#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, s, t;
vector<vector<pii>> adj;

void dijkstra() {
    vector<ll> dist(n+5, INT_MAX);
    vector<int> par(n+5, 0);
    dist[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    pq.push({0, s});

    while (pq.size()) {
        auto [len, u] = pq.top(); pq.pop();
        if (len > dist[u]) continue;

        for (auto [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
                par[v] = u;
            }
        }
    }

    if (dist[t] == INT_MAX) {
        cout << 0;
        return;
    }

    cout << dist[t] << "\n";
    vector<int> rs;
    while (t != s) {
        rs.push_back(t);
        t = par[t];
    }
    rs.push_back(s);
    for (int i = rs.size() - 1; i >= 0; i--) cout << rs[i] << " ";
}
  
int main() {
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    
    cin >> n >> s >> t;
    adj.assign(n+5, vector<pii>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int tmp; cin >> tmp;
            if (tmp != 0 && tmp != 10000) {
                adj[i].push_back({j, tmp});
            }
        }
    }

    dijkstra();
}