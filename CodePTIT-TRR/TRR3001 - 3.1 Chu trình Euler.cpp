#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<set<int>> adj;
vector<bool> dd;
vector<int> deg;
vector<int> rs;
int n;

void bfs() {
    queue<int> qu;
    qu.push(1);
    dd[1] = true;

    while (qu.size()) {
        int u = qu.front(); qu.pop();

        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                qu.push(v);
            }
        }
    }
}

bool isConnected() {
    dd.assign(n+5, false);
    bfs();
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) return false;
    }
    return true;
}

int isEuler() {
    int odd = 0;
    for (int x : deg) {
        if (x % 2 != 0) odd++;
    }
    if ((odd != 0 && odd != 2) || !isConnected()) return 0;
    if (odd == 0) return 1;
    return 2;
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
            st.pop();
            rs.push_back(u);
        }
    }

    reverse(rs.begin(), rs.end());
}
  
int main() {
    ifstream fi("CT.INP");
    ofstream fo("CT.OUT");
    
    int t, tmp;
    fi >> t;
    if (t == 1) {
        fi >> n;
        adj.assign(n+5, set<int>());
        deg.assign(n+5, 0);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                fi >> tmp;
                if (tmp) adj[i].insert(j);
                deg[i] += tmp;
            }
        }

        fo << isEuler() << "\n";
    } else {
        int u;
        fi >> n >> u;
        adj.assign(n+5, set<int>());
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                fi >> tmp;
                if (tmp) adj[i].insert(j);
            }
        }

        eulerCycle(u);
        for (int x : rs) fo << x << " ";
    }
    
    fi.close();
    fo.close();
}