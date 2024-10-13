#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int chiaHet(int m, int n, int x) {
    int l = (int)ceil((float)m/x);
    int r = n/x;
    return r - l + 1;
}

int boiChung(int m, int n, int a, int b) {
    int gcd = __gcd(a, b);
    int lcm = a / gcd * b;
    return chiaHet(m, n, lcm);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int m, n, a, b;
        cin >> m >> n >> a >> b;
        cout << chiaHet(m, n, a) + chiaHet(m, n, b) - boiChung(m, n, a, b) << "\n";
    }
}