#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int t, n, m;
    fi >> t >> n >> m;
    vector<vector<int>> a(n, vector<int>(n, 1e4));
    vector<int> degIn(n, 0), degOut(n, 0);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        fi >> u >> v >> w;
        u--; v--;
        degIn[v]++;
        degOut[u]++;
        a[u][v] = w;
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) fo << degIn[i] << " " << degOut[i] << "\n";
    } else {
        fo << n << '\n';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) fo << "0 ";
                else fo << a[i][j] << " ";
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}