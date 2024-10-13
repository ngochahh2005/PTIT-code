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
        int n, tmp;
        cin >> n;
        int a[n+5], b[n+5];
        a[0] = b[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            a[i] = a[i-1] + tmp;
        }
        for (int i = 1; i <= n; i++) {
            cin >> tmp;
            b[i] = b[i-1] + tmp;
        }
        int ma = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i; j <= n; j++) {
                if (a[j] - a[i-1] == b[j] - b[i-1]) ma = max(ma, j-i+1);
            }
        }
        cout << ma << "\n";
    }
}