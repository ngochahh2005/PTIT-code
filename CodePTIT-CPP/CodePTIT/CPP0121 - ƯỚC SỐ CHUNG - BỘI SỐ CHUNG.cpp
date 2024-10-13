#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    if (a % b == 0) return b;
    return gcd(b, a%b);
}

ll lcm(int a, int b) {
    return (ll)a/gcd(a, b) * b;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << lcm(a, b) << " " << gcd(a, b) << "\n";
    }
}