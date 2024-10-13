#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll f[1005];
void fibonacci() {
    f[0] = 0; f[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        f[i] = ((f[i-1] % mod) + (f[i-2] % mod)) % mod;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    fibonacci();
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}