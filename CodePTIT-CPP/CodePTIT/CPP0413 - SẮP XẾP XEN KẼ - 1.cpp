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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int l = 0, r = n-1;
        while (l <= r) {
            if (l < r) cout << a[r--] << " " << a[l++] << " ";
            else cout << a[l++];
        }
        cout << "\n";
    }
}