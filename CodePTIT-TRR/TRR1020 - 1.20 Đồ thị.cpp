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
    vector<int> degOut(n, 0), degIn(n, 0);
    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++) {
        fi >> k;
        while (k--) {
            fi >> tmp;
            degOut[i]++;
            degIn[tmp-1]++;
            vp.push_back({i, tmp-1});
        }
    }

    if (t == 1) {
        for (int i = 0; i < n; i++) fo << degIn[i] << " " << degOut[i] << "\n";
    } else {
        int m = vp.size();
        fo << n << " " << m << '\n';
        vector<vector<int>> a(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++) {
            int u = vp[j].first;
            int v = vp[j].second;
            a[u][j] = 1;
            a[v][j] = -1;
        }
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