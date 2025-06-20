#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

// Khong check euler + nhap ma tran = xau

int n;
set<int> adj[105];
int in[105], out[105];

int iseuler() {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (abs(in[i] - out[i]) == 1) cnt++;
        if (cnt > 2 || abs(in[i] - out[i]) > 1) return 0;
    }
    if (!cnt) return 1;
    if (cnt == 2) return 2;
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
    int t;
    cin >> t >> n;
    if (t == 1) {
        for (int i = 1; i <= n; i++) {
            string s;
            getline(cin >> ws, s);
            stringstream ss(s);
            int x;
            ss >> x;
            while (ss >> x) {
                adj[i].insert(x);
                in[x]++;
                out[i]++;
            }
        }
        cout << iseuler();
    } else {
        int m, x, u;
        cin >> u;
        for (int i = 1; i <= n; i++) {
            cin >> m;
            while (m--) {
                cin >> x;
                adj[i].insert(x);
            }
        }
        eulerCycle(u);
    }
}