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
    int n, m, u, v;
    fi >> n >> m;
    vector< pair<int, int> > vp;
    map<int, int> deg;
    for (int i = 0; i < m; i++) {
        fi >> u >> v;
        u--; v--;
        deg[u]++;
        deg[v]++;
        vp.push_back({u, v});
    }
    if (rq == 1) {
        for (auto x : deg) {
            fo << x.second << " ";
        }
    } else {
        vector< vector<int> > a(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++) {
            u = vp[j].first;
            v = vp[j].second;
            a[u][j] = 1;
            a[v][j] = 1;
        }
        fo << n << " " << m << "\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                fo << a[i][j] << " ";
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}