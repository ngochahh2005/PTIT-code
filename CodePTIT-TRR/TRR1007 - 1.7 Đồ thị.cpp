#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    ifstream fi("DT.INP");
    ofstream fo("DT.OUT");
    
    int rq, n, k, tmp;
    fi >> rq >> n;
    vector< vector<int> > v(n);
    for (int i = 0; i < n; i++) {
        fi >> k;
        for (int j = 0; j < k; j++) {
            fi >> tmp;
            v[i].push_back(tmp-1);
        }
    }

    if (rq == 1) {
        for (int i = 0; i < n; i++) fo << v[i].size() << " ";
    } else {
        vector< vector<int> > a(n, vector<int>(n, 0));
        fo << n << '\n';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < v[i].size(); j++) {
                a[i][v[i][j]] = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                fo << a[i][j] << " ";
            }
            fo << "\n";
        }
    }
    
    fi.close();
    fo.close();
}