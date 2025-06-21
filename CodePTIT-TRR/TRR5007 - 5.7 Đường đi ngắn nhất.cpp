#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct edge {
    int u, v, w;
};

int n, s, t;
vector<edge> ed;
  
void bellmanFord() {
    vector<ll> dist(n+5, INT_MAX);
    dist[s] = 0;
    vector<int> par(n+5, 0);

    for (int i = 1; i <= n-1; i++) {
        for (auto [u, v, w] : ed) {
            if (dist[u] != INT_MAX && dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                par[v] = u;
            }
        }
    }

    for (auto [u, v, w] : ed) {
        if (dist[u] != INT_MAX && dist[v] > dist[u] + w) {
            cout << -1;
            return ;
        }
    }

    if (dist[t] == INT_MAX) {
        cout << 0;
        return ;
    }

    cout << dist[t] << "\n";
    vector<int> rs;
    while (t != s) {
        rs.push_back(t);
        t = par[t];
    }
    rs.push_back(s);
    for (int i = rs.size() - 1; i >= 0; i--) {
        cout << rs[i] << " ";
    }
}

int main() {
    freopen("BN.INP", "r", stdin);
    freopen("BN.OUT", "w", stdout);
    
    cin >> n >> s >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int tmp; cin >> tmp;
            if (tmp != 0 && tmp != 10000) {
                ed.push_back({i, j, tmp});
            }
        }
    }

    bellmanFord();
}