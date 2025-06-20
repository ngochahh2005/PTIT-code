#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct matrix {
    int u, v, w = 0;
    matrix (int a, int b, int c) : u(a), v(b), w(c) {}
};
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int rq, n, m;
    fi >> rq >> n >> m;
    vector<matrix> vec;
    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        fi >> u >> v >> w;
        u--; v--;
        mp[u]++;
        mp[v]++;
        vec.push_back(matrix(u, v, w));
    }

    if (rq == 1) {
        for (int i = 0; i < n; i++) fo << mp[i] << " ";
    } else {
        vector< vector<int> > a(n, vector<int>(n, 1e4));
        for (int i = 0; i < m; i++) {
            a[vec[i].u][vec[i].v] = a[vec[i].v][vec[i].u] = vec[i].w;
        }
        fo << n << "\n";
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