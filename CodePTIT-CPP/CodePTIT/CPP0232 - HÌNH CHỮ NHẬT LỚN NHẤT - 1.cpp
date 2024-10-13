#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int result(int n, int m) {
    vector<vector<int>> f(n, vector<int>(m, 0));
    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tmp;
            if (tmp == 1) {
                f[i][j] = (i == 0) ? 1 : f[i-1][j] + 1;
            }
        }
    }
    int ma = 0;
    for (int i = 0; i < n; i++) {
        vector<int> v = f[i];
        sort(v.begin(), v.end(), greater<int>());
        for (int j = 0; j < m; j++) {
            ma = max(ma, v[j] * (j + 1));
        }
    }
    return ma;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << result(n, m) << "\n";
    }
}