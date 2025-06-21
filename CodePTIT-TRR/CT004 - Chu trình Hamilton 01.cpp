#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;

vector<int> adj[105];
int n, start;
vector<vector<int>> rs;
int a[105];
bool dd[105];

void ghiNhan() {
    vector<int> cycle;
    for (int i = 1; i <= n; i++) cycle.push_back(a[i]);
    cycle.push_back(start);
    rs.push_back(cycle);
}

void hamilton(int k) {
    for (int v : adj[a[k-1]]) {
        if (k == n+1 && v == start) ghiNhan();
        else if (!dd[v]) {
            a[k] = v;
            dd[v] = true;
            hamilton(k+1);
            dd[v] = false;
        }
    }
}
  
int main() {
    cin >> n >> start;
    int tmp;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> tmp;
            if (tmp) adj[i].push_back(j);
        }
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