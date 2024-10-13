#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void phanTich(int n) {
    if (n < 2) {
        cout << "\n";
        return ;
    }
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    if (cnt != 0) {
        cout << "2 " << cnt << "\n";
        cnt = 0;
    }
    int i = 3;
    while (i <= sqrt(n)) {
        cnt = 0;
        while (n % i == 0) {
            cnt++;
            n /= i;
        }
        if (cnt > 0)cout << i << " " << cnt << "\n";
        i += 2;
    }
    if (n > 2) cout << n << " 1";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    phanTich(n);
}