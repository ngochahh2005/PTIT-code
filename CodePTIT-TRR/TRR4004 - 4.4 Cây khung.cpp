#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define tiii tuple<int, int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct edge {
    int u, v, w;
};

struct dsu {
    vector<int> parent, sz;

    dsu (int n) : parent(n+5), sz(n+5) {
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            sz[i] = 1;
        }
    }

    int find(int v) {
        if (v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return ;
        if (sz[a] < sz[b]) swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
    }
};

vector<vector<pii>> adj;
bool dd[105];
int n, start;

bool isconnect() {
    dsu d(n);
    for (int u = 1; u <= n; u++) {
        for (auto [v, w] : adj[u]) {
            if (u < v) d.unite(u, v);
        }
    }

    int root = d.find(1);
    for (int i = 2; i <= n; i++) {
        if (d.find(i) != root) return false;
    }
    return true;
}

void prim() {
    priority_queue<tiii, vector<tiii>, greater<tiii>> pq;
    vector<edge> mst;
    int rs = 0;
    
    dd[start] = true;
    for (auto [v, w] : adj[start]) {
        pq.push({w, start, v});
    }

    while (pq.size() && mst.size() < n-1) {
        int u, v, w;
        tie(w, u, v) = pq.top(); pq.pop();
        if (dd[v]) continue;

        dd[v] = true;
        rs += w;
        mst.push_back({min(u, v), max(u, v), w});

        for (auto [v1, w1] : adj[v]) {
            if (!dd[v1]) pq.push({w1, v, v1});
        }
    }
    
    cout << rs << "\n";
    for (auto [u, v, w] : mst) {
        cout << u << " " << v << " " << w << "\n";
    }
}
  
int main() {
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    
    cin >> n >> start;
    adj.assign(105, vector<pii>());
    int tmp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> tmp;
            if (i != j && tmp != 0 && tmp != 10000) {
                adj[i].push_back({j, tmp});
            }
        }
    }

    if (!isconnect()) {
        cout << 0;
        return 0;
    }

    prim();
}