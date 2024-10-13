#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x, tmp;
        cin >> n >> x;
        int idx = -2;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (idx == -2 && tmp == x) idx = i;
        }
        cout << idx + 1 << "\n";
    }
}