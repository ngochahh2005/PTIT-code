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
    vector< vector<int> > rs(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fi >> a[i][j];
            degOut[i] += a[i][j];
            degIn[j] += a[i][j];
            if (a[i][j]) rs[i].push_back(j+1);
        }
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) {
            fo << degIn[i] << " " << degOut[i] << "\n";
        }
    } else {
        fo << n << '\n';
        for (int i = 0; i < n; i++) {
            fo << rs[i].size();
            for (int x : rs[i]) {
                fo << " " << x;
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}