#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

ll f[95];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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