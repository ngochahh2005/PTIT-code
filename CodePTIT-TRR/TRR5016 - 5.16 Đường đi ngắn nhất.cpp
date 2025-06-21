#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mod 1000000007
#define lmt 1000000
using namespace std;
const int INF = 10000;

int n;
int dist[105][105];
int nxt[105][105];
vector<int> par(105, -1);

void floyd() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> dist[i][j];
            if (i != j && dist[i][j] < INF) nxt[i][j] = j;
            else nxt[i][j] = -1;
        }
    }

    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (dist[i][k] < INF && dist[k][j] < INF) {
                    if (dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        nxt[i][j] = nxt[i][k];
                    }
                }
            }
        }
    }
}

vector<int> path(int u, int v) {
    if (nxt[u][v] == -1) return {};
    vector<int> rs = {u};
    while (u != v) {
        u = nxt[u][v];
        rs.push_back(u);
    }
    return rs;
}

void max_path() {
    int ma = INT_MIN;
    vector<int> rs;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            if (dist[i][j] < INF) {
                if (dist[i][j] > ma) {
                    ma = dist[i][j];
                    rs = path(i, j);
                }
            }
        }
    }

    if (ma < 0) {
        cout << -1;
        return ;
    }

    cout << rs[0] << " " << rs.back() << " " << ma << "\n";
    for (int x : rs) cout << x << " ";
}
 
int main() {
    freopen("DN.INP", "r", stdin);
    freopen("DN.OUT", "w", stdout);
    
    cin >> n;
    floyd();
    max_path();
}