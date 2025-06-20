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
    vector< vector<int> > rs(n);
    map<int, int> deg;
    for (int i = 0; i < m; i++) {
        fi >> u >> v;
        u--; v--;
        deg[u]++;
        deg[v]++;
        rs[u].push_back(v+1);
        rs[v].push_back(u+1);
    }
    if (rq == 1) {
        for (auto x : deg) {
            fo << x.second << " ";
        }
    } else {
        fo << n << "\n";
        for (int i = 0; i < n; i++) {
            fo << rs[i].size() << " ";
            sort(rs[i].begin(), rs[i].end());
            for (int j = 0; j < rs[i].size(); j++) {
                fo << rs[i][j] << " ";
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}