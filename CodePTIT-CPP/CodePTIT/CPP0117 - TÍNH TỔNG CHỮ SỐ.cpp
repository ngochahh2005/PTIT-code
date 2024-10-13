#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int sumDg(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int rutGon(int n) {
    if (n / 10 == 0) return n;
    return rutGon(sumDg(n));
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
        cout << rutGon(n) << "\n";
    }
}