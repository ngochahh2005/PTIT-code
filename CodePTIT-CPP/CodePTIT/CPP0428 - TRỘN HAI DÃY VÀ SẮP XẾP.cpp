#include <bits/stdc++.h>
#define ll long long
#define lmt 2000005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n+m; i++) {
            cin >> a[i];
        }
        sort(a, a+n+m);
        for (int i = 0; i < n+m; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}