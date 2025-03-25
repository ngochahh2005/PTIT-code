#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int search(int a[], int l, int r, int vl) {
    if (l <= r) {
        int m = (r+l)/2;
        if (a[m] == vl) return m;
        if (a[m] > vl) return search(a, l, m-1, vl);
        else return search(a, m+1, r, vl);
    }
    return -1;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, x, pos = 0;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) continue;
            if (a[i-1] > a[i] && pos == 0) pos = i;
        }
        if (pos == 0) cout << search(a, 0, n-1, x) + 1 << "\n";
        else if (a[0] > x) cout << search(a, pos, n-1, x) + 1 << "\n";
        else cout << search(a, 0, pos-1, x) + 1 << "\n";
    }
}