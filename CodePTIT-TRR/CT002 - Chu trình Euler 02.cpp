#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<set<int>> adj;
vector<int> deg;
int n;

int isEuler() {
    int odd = 0;
    for (int i = 1; i <= n; i++) {
        if (deg[i] % 2) odd++;
    }
    if (odd == 0) return 1;
    if (odd == 2) return 2;
    return 0;
}

void eulerCycle(int x) {
    stack<int> st;
    vector<int> ec;
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
            ec.push_back(u);
        }
    }

    reverse(ec.begin(), ec.end());
    for (int y : ec) cout << y << " ";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, tmp;
    cin >> t >> n;
    adj.assign(n+5, set<int>());
    if (t == 1) {
        deg.assign(n+5, 0);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> tmp;
                if (tmp) adj[i].insert(j);
                deg[i] += tmp;
            }
        }

        cout << isEuler();
    } else {
        int u;
        cin >> u;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> tmp;
                if (tmp) adj[i].insert(j);
            }
        }

        eulerCycle(u);
    }
}