#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");

    int rq;
    fi >> rq;
    int n;
    fi >> n;
    int a[n][n];
    vector< pair<int, int> > vp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fi >> a[i][j];
            if (j > i) {
                if (a[i][j]) vp.push_back({i, j});
            }
        }
    }

    if (rq == 1) {
        for (int i = 0; i < n; i++) {
            int deg = 0;
            for (int j = 0; j < n; j++) {
                deg += a[i][j];
            }
            fo << deg << " ";
        }
    } else {
        int m = vp.size();
        vector< vector<int> > rs(n, vector<int>(m, 0));
        fo << n << " " << m << '\n';
        for (int j = 0; j < m; j++) {
            int u = vp[j].first;
            int v = vp[j].second;
            rs[u][j] = 1;
            rs[v][j] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                fo << rs[i][j] << " ";
            }
            fo << "\n";
        }
    }

    fi.close();
    fo.close();
}