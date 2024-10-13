#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x, tmp;
        int ck = -1;
        cin >> n >> x;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp == x) ck = 1;
        }
        cout << ck << "\n";
    }
}