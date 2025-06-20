#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
vector<set<int>> adj;
vector<int> ec;
vector<int> dd;
vector<int> dgi, dgo;

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

bool isconnected() {
    dd.assign(n+5, false);
    bfs();
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) return false;
    }
    return true;
}

int isEuler() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (abs(dgi[i] - dgo[i]) == 1) cnt++;
        if (cnt > 2 || abs(dgi[i] - dgo[i]) > 1) return 0;
    }
    if (cnt == 1 || !isconnected()) return 0;
    if (cnt == 0) return 1;
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
        } else {
            ec.push_back(u);
            st.pop();
        }
    }

    reverse(ec.begin(), ec.end());
}
  
int main() {
    ifstream fi("CT.INP");
    ofstream fo("CT.OUT");
    
    int t, tmp;
    fi >> t;
    if (t == 1) {
        fi >> n;
        adj.assign(n+5, set<int>());
        dgi.assign(n+5, 0);
        dgo.assign(n+5, 0);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                fi >> tmp;
                if (tmp) {
                    adj[i].insert(j);
                    adj[j].insert(i);
                }
                dgi[j] += tmp;
                dgo[i] += tmp;
            }
        }

        fo << isEuler();
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
        for (int x : ec) fo << x << " ";
    }
    
    fi.close();
    fo.close();
}