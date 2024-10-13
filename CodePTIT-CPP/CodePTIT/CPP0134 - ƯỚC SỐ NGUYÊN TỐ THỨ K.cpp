#include <bits/stdc++.h>
#define ll long long
#define lmt 10005
using namespace std;

int phanTich(int n, int k) {
    int a[lmt], cnt = 0;
    if (n < 2) {
        cout << "\n";
        return -1;
    }
    while (n % 2 == 0) {
        a[cnt++] = 2;
        n /= 2;
    }
    ll i = 3;
    while (i <= sqrt(n)) {
        while (n % i == 0) {
            a[cnt++] = i;
            n /= i;
        }
        i += 2;
    }
    if (n > 2) a[cnt++] = n;
    if (k > cnt) return -1;
    else return a[k-1];
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << phanTich(n, k) << "\n";
    }
}