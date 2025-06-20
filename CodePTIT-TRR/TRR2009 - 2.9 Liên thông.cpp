#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<vector<int>> adj(105);
int n;
vector<bool> dd(105, false);
vector<vector<int>> rs(105);

void dfs(int x, int cnt) {
    stack<int> st;
    st.push(x);
    dd[x] = true;
    rs[cnt].push_back(x);

    while (st.size()) {
        int u = st.top(); st.pop();

        for (int v : adj[u]) {
            if (!dd[v]) {
                dd[v] = true;
                rs[cnt].push_back(v);
                st.push(u);
                st.push(v);
            }
        }
    }
    sort(rs[cnt].begin(), rs[cnt].end());
}
  
int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");

    fi >> n;
    int t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> t;
            if (t) adj[i].push_back(j);
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) {
            dfs(i, cnt);
            cnt++;
        }
    }
    
    fo << cnt << "\n";
    for (int i = 0; i < cnt; i++) {
        for (int j : rs[i]) {
            fo << j << " ";
        }
        fo << "\n";
    }
    
    fi.close();
    fo.close();
}