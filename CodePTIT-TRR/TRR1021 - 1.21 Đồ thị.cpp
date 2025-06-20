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
    
    int t, n, tmp;
    fi >> t >> n;
    vector<int> degIn(n, 0), degOut(n, 0);
    vector<matrix> rs;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fi >> tmp;
            if (tmp > 0 && tmp < 1e4) {
                rs.push_back(matrix(i+1, j+1, tmp));
                degOut[i]++;
                degIn[j]++;
            }
        }
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) fo << degIn[i] << " " << degOut[i] << "\n";
    } else {
        int m = rs.size();
        fo << n << " " << m << "\n";
        for (int j = 0; j < m; j++) {
            fo << rs[j].u << " " << rs[j].v << " " << rs[j].w << "\n";
        }
    }
    
    fi.close();
    fo.close();
}