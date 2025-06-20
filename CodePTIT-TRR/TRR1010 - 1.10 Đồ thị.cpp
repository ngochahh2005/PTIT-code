#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct matrix {
    int fr, sc, w = 0;

    matrix (int first, int second, int weight) : fr(first), sc(second), w(weight) {}
};
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int rq, n;
    fi >> rq >> n;
    int a[n][n];
    vector<int> deg(n, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fi >> a[i][j];
            if (a[i][j] > 0 && a[i][j] < 1e4) deg[i]++;
        }
    }
    
    if (rq == 1) {
        for (int i = 0; i < n; i++) fo << deg[i] << " ";
    } else {
        vector<matrix> rs;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (a[i][j] < 1e4 && a[i][j] > 0) {
                    rs.push_back(matrix(i+1, j+1, a[i][j]));
                }
            }
        }
        fo << n << " " << rs.size() << "\n";
        for (int i = 0; i < rs.size(); i++) {
            fo << rs[i].fr << " " << rs[i].sc << " " << rs[i].w << "\n";
        }
    }
    
    fi.close();
    fo.close();
}