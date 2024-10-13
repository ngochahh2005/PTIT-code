#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

long long cdt(long long a, long long b) 
{
    if (b == 0) return 1;
    long long t = cdt(a, b / 2) % mod;
    if (b % 2 == 0) return (t * t) % mod;
	return (a * ((t * t) % mod)) % mod;
}

ll gt[1005], daoGt[1005];
void giaiThua() {
    gt[0] = gt[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        gt[i] = ((gt[i-1] % mod) * ((ll)i % mod)) % mod;
    }
    daoGt[1000] = cdt(gt[1000], mod - 2);
    for (int i = 999; i >= 0; i--) {
        daoGt[i] = ((daoGt[i+1] % mod) * ((ll)i+1 % mod)) % mod;
    }
}

ll Ck(int k, int n) {
    return (((gt[n] % mod) * (daoGt[k] % mod) % mod) * (daoGt[n-k] % mod)) % mod;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    giaiThua();
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << Ck(r, n) << "\n";
    }
}