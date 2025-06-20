#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int t, n, tmp, k;
    fi >> t >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    vector<int> degOut(n, 0), degIn(n, 0);
    for (int i = 0; i < n; i++) {
        fi >> k;
        while (k--) {
            fi >> tmp;
            a[i][tmp-1] = 1;
            degOut[i]++;
            degIn[tmp-1]++;
        }
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) fo << degIn[i] << " " << degOut[i] << "\n";
    } else {
        fo << n << '\n';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                fo << a[i][j] << ' ';
            }
            fo << '\n';
        }
    }
    
    fi.close();
    fo.close();
}