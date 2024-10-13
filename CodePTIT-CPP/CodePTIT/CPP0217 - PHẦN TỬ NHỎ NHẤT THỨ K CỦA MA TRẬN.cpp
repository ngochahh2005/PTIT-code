#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int m = n*n;
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        sort(a, a+m);
        cout << a[k-1] << "\n";
    }
}