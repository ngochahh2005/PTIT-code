#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int n, start;
vector<int> adj[105];
vector<pii> tree;
bool dd[105];

struct dsu {
    vector<int> par, sz;

    dsu (int n) : par(n+5), sz(n+5) {
        for (int i = 1; i <= n; i++) {
            par[i] = i;
            sz[i] = 1;
        }
    }

    int find(int v) {
        if (par[v] == v) return v;
        return par[v] = find(par[v]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return ;
        if (sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }

    bool check(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return true;
        return false; 
    }
};

void dfs() {
    stack<int> st;
    st.push(start);
    dd[start] = true;

    while (st.size()) {
        int u = st.top(); st.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                st.push(u);
                st.push(v);
                tree.push_back({u, v});
                break;
            }
        }
    }
}

bool isconnect(dsu d) {
    for (int i = 2; i <= n; i++) {
        if (!d.check(1, i)) return false;
    }
    return true;
}

void bfs() {
    queue<int> qu;
    qu.push(start);
    dd[start] = true;

    while (qu.size()) {
        int u = qu.front(); qu.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                qu.push(v);
                tree.push_back({u, v});
            }
        }
    }
}

int main() {
    freopen("CK.INP", "r", stdin);
    freopen("CK.OUT", "w", stdout);
    
    int t, tmp;
    cin >> t;
    cin >> n >> start;
    dsu d(n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> tmp;
            if (tmp) {
                adj[i].push_back(j);
                if (i != j) d.unite(i, j);
            }
        }
    }

    if (!isconnect(d)) {
        cout << 0;
        return 0;
    }

    if (t == 1) dfs();
    else bfs();

    if (tree.size() != n-1) {
        cout << 0;
        return 0;
    }
    cout << tree.size() << "\n";
    for (auto [u, v] : tree) {
        cout << min(u, v) << " " << max(u, v) << "\n";
    }
}