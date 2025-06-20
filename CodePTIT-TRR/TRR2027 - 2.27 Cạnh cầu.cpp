#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
#define pii pair<int, int>
using namespace std;

vector<vector<int>> adj;
vector<bool> dd;
int n;
vector<pii> rs;

void dfs(int x, int s, int t) {
    stack<int> st;
    st.push(x);
    dd[x] = true;

    while (st.size()) {
        int u = st.top(); st.pop();

        for (int v : adj[u]) {
            if ((u == s && v == t) || (u == t && v == s)) continue;
            if (!dd[v]) {
                dd[v] = true;
                st.push(v);
            }
        }
    }
}

int connected(int s, int t) {
    int cnt = 0;
    dd.assign(n+5, false);
    cout << "\ncac tplt khi bo qua canh " << s << " va " << t << ": ";
    for (int i = 1; i <= n; i++) {
        if (!dd[i]) {
            cnt++;
            dfs(i, s, t);
        }
    }
    cout << "\n";
    return cnt;
}

void canhCau() {
    int cnt1 = connected(0, 0);
    for (int i = 1; i <= n; i++) {
        for (int j : adj[i]) {
            if (i >= j) continue;
            int cnt2 = connected(i, j);
            cout << i << " " << j << ": ";
            cout << cnt1 << " " << cnt2 << "\n";
            if (cnt1 != cnt2) rs.push_back({i, j});
        }
    }
}
  
int main() {
    ifstream fi("TK.INP");
    ofstream fo("TK.OUT");
    
    fi >> n;
    int tmp;
    adj.assign(n+5, vector<int>());
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            fi >> tmp;
            if (tmp) adj[i].push_back(j);
        }
    }

    canhCau();
    fo << rs.size() << "\n";
    for (auto x : rs) fo << x.first << " " << x.second << "\n"; 
    
    fi.close();
    fo.close();
}