#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct matrix {
    ll m[2][2];
    friend matrix operator*(matrix a, matrix b) {
        matrix rs;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                ll s = 0;
                for (int k = 0; k < 2; k++) {
                    s = ((s % mod) + (a.m[i][k] % mod) * (b.m[k][j] % mod) % mod) % mod;
                }
                rs.m[i][j] = s;
            }
        }
        return rs;
    }
};

matrix binpow(matrix a, ll n) {
    if (n == 1) return a;
    matrix tmp = binpow(a, n/2);
    if (n % 2 == 0) return tmp * tmp;
    return a * tmp * tmp;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        matrix a;
        a.m[0][0] = a.m[1][0] = a.m[0][1] = 1;
        a.m[1][1] = 0;
        matrix rs = binpow(a, n);
        cout << rs.m[0][1] << "\n";
    }
}