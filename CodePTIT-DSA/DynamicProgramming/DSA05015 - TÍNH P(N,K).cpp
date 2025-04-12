#include <bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll f[1005], c[1005][1005];

void toHop() {
    for (int n = 0; n <= 1000; n++) {
        for (int k = 0; k <= n; k++) {
            if (k == 0 || k == n) c[k][n] = 1;
            else c[k][n] = (c[k][n-1] + c[k-1][n-1]) % mod;
        }
    }
}
  
void giaiThua() {
    f[0] = f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        f[i] = ((f[i-1] % mod) * (i % mod)) % mod;
    }
}

ll P(int k, int n) {
    return ((c[k][n] % mod) * (f[k] % mod)) % mod;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    toHop();
    giaiThua();
    int t;
    cin >> t;
    while (t--) {
        int k, n;
        cin >> n >> k;
        cout << P(k, n) << "\n";
    }
}