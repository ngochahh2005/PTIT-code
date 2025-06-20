#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int t, n, m, u, v;
    fi >> t >> n >> m;
    vector<int> degIn(n, 0), degOut(n, 0);
    vector<vector<int>> rs(n, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        fi >> u >> v;
        u--; v--;
        degOut[u]++;
        degIn[v]++;
        rs[u][v] = 1;
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) fo << degIn[i] << " " << degOut[i] << "\n";
    } else {
        fo << n << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                fo << rs[i][j] << " ";
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}