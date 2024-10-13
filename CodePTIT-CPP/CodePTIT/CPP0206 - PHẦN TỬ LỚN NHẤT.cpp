#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp, ma = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            ma = max(ma, tmp);
        }
        cout << ma << "\n";
    }
}