#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;

int Find(int a[], int l, int r) {
    if (l == r) {
        if (a[l] == 0) return l+1;
        return l;
    }
    int m = (l+r)/2;
    if (a[m] == 1) return Find(a, l, m);
    return Find(a, m+1, r);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << Find(a, 0, n-1) << "\n";
    }
}