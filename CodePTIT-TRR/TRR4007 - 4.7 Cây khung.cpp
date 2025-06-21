#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
struct edge {
    int u, v, w, id;
    friend bool operator<(const edge &a, const edge &b) {
        if (a.w == b.w) return a.id < b.id;
        return a.w < b.w;
    }
};

struct dsu {
    vector<int> par, sz;
    
    dsu(int n) : par(n+5), sz(n+5) {
        for (int i = 1; i <= n; i++) {
            par[i] = i;
            sz[i] = 1;
        }
    }

    int find(int v) {
        if (v == par[v]) return v;
        return par[v] = find(par[v]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
        return true;
    }
};

int n, m;
vector<edge> ed;

bool isconnect(dsu d) {
    int root = d.find(1);
    for (int i = 2; i <= n; i++) {
        if (d.find(i) != root) return false;
    }
    return true;
}

void kruskal() {
    sort(ed.begin(), ed.end());
    vector<edge> mst;
    dsu d(n);
    int rs = 0;
    
    for (auto e : ed) {
        if (mst.size() == n-1) break;
        if (d.unite(e.u, e.v)) {
            rs += e.w;
            mst.push_back({min(e.u, e.v), max(e.u, e.v), e.w});
        }
    }

    cout << rs << "\n";
    for (auto e : mst) {
        cout << e.u << " " << e.v << " " << e.w << '\n';
    }
}

int main() {
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    
    cin >> n >> m;
    dsu d(n);
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        ed.push_back({u, v, w, i});
        d.unite(u, v);
    }

    if (!isconnect(d)) {
        cout << 0;
        return 0;
    }

    kruskal();
}