#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int n, m;
vector<set<int>> adj;
vector<int> deg, dd;
vector<int> rs;

void bfs(int x) {
    queue<int> q;
    q.push(x);
    dd[x] = true;

    while (q.size()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                q.push(v);
            }
        }
    }
}

bool isconnected() {
    dd.assign(n+5, false);
    bfs(1);
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) return false;
    }
    return true;
}

int isEuler() {
    if (!isconnected()) return 0;
    int odd = 0;
    for (int i = 1; i <= n; i++) {
        if (deg[i] % 2 != 0) odd++;
    }
    if (odd) return 2;
    return 0;
}

void eulerCycle(int x) {
    stack<int> st;
    st.push(x);

    while (st.size()) {
        int u = st.top();
        if (adj[u].size()) {
            int v = *adj[u].begin();
            st.push(v);
            adj[u].erase(v);
            adj[v].erase(u);
        } else {
            rs.push_back(u);
            st.pop();
        }
    }
    reverse(rs.begin(), rs.end());
}

int main() {
    int t;
    cin >> t;
    if (t == 1) {
        cin >> n >> m;
        adj.assign(n+5, set<int>());
        deg.assign(n+5, 0);
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            deg[u]++; deg[v]++;
            adj[u].insert(v);
            adj[v].insert(u);
        } 

        cout << isEuler();
    } else {
        int x;
        cin >> n >> m >> x;
        adj.assign(n+5, set<int>());
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].insert(v);
            adj[v].insert(u);
        } 
        
        eulerCycle(x);
        for (int y : rs) cout << y << " ";
    }
}