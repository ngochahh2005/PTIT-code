#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int solve(int n, int p) {
    if (n < p) return 0;
    int res = 0;
    while (n > 0) {
        res += (n / p);
        n /= p;
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        cout << solve(n, p) << "\n";
    }
}