#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    int can = sqrt(n);
    for (int i = 2; i <= can; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool tang (int n) {
    int sau = 10;
    while (n > 0) {
        if (n % 10 >= sau) return false;
        sau = n % 10;
        n /= 10;
    }
    return true;
}

bool giam (int n) {
    int sau = 0;
    while (n > 0) {
        if (n % 10 <= sau) return false;
        sau = n % 10;
        n /= 10;
    }
    return true;
}

int solve (int n) {
    int l = pow(10, n - 1);
    int r = pow(10, n) - 1;
    int cnt = 0;
    for (int i = l; i < r; i++) {
        if (tang(i) || giam(i)) {
            if (isPrime(i)) cnt++;
        }
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << "\n";
    }
}