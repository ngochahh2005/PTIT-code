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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) 
            fi >> a[i][j];
    }

    if (rq == 1) {
        for (int i = 0; i < n; i++) {
            int cnt = 0;
            for (int j = 0; j < n; j++) {
                cnt += a[i][j];
            }
            fo << cnt << " ";
        }
        fo << "\n";
    } else {
        vector< vector<int> > v(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j]) v[i].push_back(j+1);
            }
        }
        fo << n << "\n";
        for (int i = 0; i < n; i++) {
            fo << v[i].size() << " ";
            for (int j = 0; j < v[i].size(); j++) {
                fo << v[i][j] << " ";
            }
            fo << "\n";
        }
    }

    fi.close();
    fo.close();
}