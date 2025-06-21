#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

//cho do thi co huong nhung lam vo huong moi AC ???

vector<int> adj[105];
int n, m, start;
bool dd[105];
int a[105];
vector<vector<int>> rs;

void ghinhan() {
    vector<int> cycle;
    for (int i = 1; i <= n; i++) cycle.push_back(a[i]);
    cycle.push_back(start);
    rs.push_back(cycle);
}

void hamilton(int k) {
    for (int v : adj[a[k-1]]) {
        if (k == n+1 && v == start) ghinhan();
        else if (!dd[v]) {
            a[k] = v;
            dd[v] = true;
            hamilton(k+1);
            dd[v] = false;
        }
    }
}

int main() {
    // freopen("CT.INP", "r", stdin);
    // freopen("CT.OUT", "w", stdout);
    cin >> n >> m >> start;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    a[1] = start;
    dd[start] = true;
    hamilton(2);

    if (rs.empty()) cout << 0;
    else {
        cout << rs.size() << "\n";
        for (int u = 0; u < rs.size(); u++) {
            for (int v : rs[u]) {
                cout << v << " ";
            }
            cout << "\n";
        }
    }
}