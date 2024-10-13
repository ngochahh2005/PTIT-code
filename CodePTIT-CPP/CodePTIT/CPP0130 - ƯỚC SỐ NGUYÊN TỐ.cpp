#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void phanTich(ll n) {
    if (n < 2) {
        cout << "\n";
        return ;
    }
    while (n % 2 == 0) {
        cout << "2 ";
        n /= 2;
    }
    ll i = 3;
    while (i <= sqrt(n)) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
        i += 2;
    }
    if (n > 2) cout << n;
    cout << "\n";
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
        phanTich(n);
    }
}