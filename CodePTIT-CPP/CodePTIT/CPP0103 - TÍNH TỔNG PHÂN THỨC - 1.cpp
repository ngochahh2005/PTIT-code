#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += (double)1/i;
    }
    cout << fixed << setprecision(4) << s;
}