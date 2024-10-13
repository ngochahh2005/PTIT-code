#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll f[95];
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i <= 92; i++) {
        f[i] = f[i-1] + f[i-2]; 
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << f[n] << "\n";
    }
}