#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
vector<bool> dd;

void dfs(int x, vector<vector<int>>& adj) {
    stack<int> st;
    st.push(x);
    dd[x] = true;

    while (st.size()) {
        int u = st.top(); st.pop();
        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                st.push(u);
                st.push(v);
                break;
            }
        }
    }
}

bool isStronglyConnected(vector<vector<int>>& adj) {
    for (int i = 1; i <= n; i++) {
        dd.assign(n+5, false);
        dfs(i, adj);
        for (int j = 1; j <= n; j++) {
            if (!dd[j]) return false;
        }
    }
    return true;
}

bool isWeaklyConnected(vector<vector<int>>& adj) {
    dd.assign(n+5, false);
    dfs(1, adj);
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) return false;
    }
    return true;
} 

int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    int t;
    fi >> n;
    vector<vector<int>> adj(n+5);
    vector<vector<int>> a(n+5);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> t;
            if (t) {
                adj[i].push_back(j);
                a[i].push_back(j);
                a[j].push_back(i);
            }
        }
    }

    if (isStronglyConnected(adj)) fo << 1;
    else if (isWeaklyConnected(a)) fo << 2;
    else fo << 0;
    
    fi.close();
    fo.close();
}