#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int Find(int a[], int l, int r, int k) {
    if (l > r) return -1;
    int m = (l+r)/2;
    if (a[m] == k) return m+1;
    if (a[m] > k) return Find(a, l, m-1, k);
    return Find(a, m+1, r, k);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int rs = Find(a, 0, n-1, k);
        if (rs == -1) cout << "NO\n";
        else cout << rs << "\n";
    }
}