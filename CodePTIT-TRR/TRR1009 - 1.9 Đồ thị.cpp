#include <bits/stdc++.h>
using namespace std;
  
int main() {
    int rq, n, k, tmp;
    cin >> rq >> n;
    vector< pair<int, int> > vp;
    vector<int> deg(n);
    for (int i = 0; i < n; i++) {
        cin >> deg[i];
        for (int j = 0; j < deg[i]; j++) {
            cin >> tmp;
            if (tmp > i + 1) vp.push_back({i, tmp - 1});
        }
    }

    if (rq == 1) {
        for (int i = 0; i < n; i++) cout<< deg[i] << " ";
    } else {
        int m = vp.size();
        cout<< n << " " << m << "\n";
        vector< vector<int> > a(n, vector<int>(m, 0));
        for (int j = 0; j < m; j++) {
            int u = vp[j].first;
            int v = vp[j].second;
            a[u][j] = a[v][j] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout<< a[i][j] << " ";
            }
            cout<< "\n";
        }
    }
}