#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, m;
        cin >> a >> m;
        bool check = false;
        for (int i = 1; i < m; i++) {
            if (a * i % m == 1) {
                cout << i << "\n";
                check = true;
                break;
            }
        }
        if (!check) cout << "-1\n";
    }
}