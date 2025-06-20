#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int t, n;
    fi >> t >> n;
    int a[n][n];
    vector<int> degIn(n, 0), degOut(n, 0);
    vector< pair<int, int> > vp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fi >> a[i][j];
            degOut[i] += a[i][j];
            degIn[j] += a[i][j];
            if (a[i][j]) vp.push_back({i, j});
        }
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) {
            fo << degIn[i] << " " << degOut[i] << "\n";
        }
    } else {
        int m = vp.size();
        fo << n << " " << m << '\n';
        vector< vector<int> > rs(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++) {
            int u = vp[j].first;
            int v = vp[j].second;
            rs[u][j] = 1;
            rs[v][j] = -1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                fo << rs[i][j] << " ";
            }
            fo << '\n';
        }
    }
    
    fi.close();
    fo.close();
}