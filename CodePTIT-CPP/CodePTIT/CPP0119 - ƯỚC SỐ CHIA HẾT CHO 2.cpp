#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int count(int n) {
    int can = (int)sqrt(n), cnt = 0;
    for (int i = 1; i <= can; i++) {
        if (n % i == 0 && i % 2 == 0) cnt++;
        if ((n / i) % 2 == 0 && n % (n / i) == 0) cnt++;
    }
    if (can * can == n && can % 2 == 0) cnt--;
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
        cout << count(n) << "\n";
    }
}