#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll fi[95];

void sinh() {
    fi[1] = 1;
    fi[2] = 1;
    for (int i = 3; i <= 92; i++) fi[i] = fi[i-2] + fi[i-1];
}

int Find(ll n, ll k) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k > fi[n-2]) return Find(n-1, k - fi[n-2]);
    return Find(n-2, k);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sinh();
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }
}