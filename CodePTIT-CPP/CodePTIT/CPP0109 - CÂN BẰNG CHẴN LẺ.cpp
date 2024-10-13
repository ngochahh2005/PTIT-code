#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(int n) {
    int even = 0, odd = 0, dg;
    while (n > 0) {
        dg = n % 10;
        if (dg % 2 == 0) even++;
        else odd++;
        n /= 10;
    }
    if (even == odd) return true;
    return false;
}

void solve(int n) {
    if (n % 2 != 0) return ;
    int l = (int)pow(10, n-1);
    int r = (int)pow(10, n) - 1;
    int cnt = 0;
    for (int i = l; i <= r; i++) {
        if (cnt % 10 == 0 && cnt != 0) cout << "\n";
        if (check(i)) {
            cout << i << " ";
            cnt++;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    solve(n);
    // cout << check(25);
}