#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;

struct matrix {
    ll m[15][15];
    friend matrix operator*(matrix a, matrix b) {
        matrix rs;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                ll s = 0;
                for (int k = 0; k < n; k++) {
                    s = ((s % mod) + ((a.m[i][k] % mod) * (b.m[k][j] % mod) % mod)) % mod;
                }
                rs.m[i][j] = s;
            }
        }
        return rs;
    }
};

matrix binpow(matrix a, ll k) {
    if (k == 1) return a;
    matrix tmp = binpow(a, k/2);
    if (k % 2 == 0) return tmp * tmp;
    return a * tmp * tmp;
}

ll sum(matrix a) {
    ll s = 0;
    for (int i = 0; i < n; i++) {
        s = ((s % mod) + (a.m[i][n-1] % mod)) % mod;
    }
    return s;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll k;
        cin >> n >> k;
        matrix a;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a.m[i][j];
            }
        }
        matrix rs = binpow(a, k);
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << rs.m[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        cout << sum(rs) << "\n";
    }
}