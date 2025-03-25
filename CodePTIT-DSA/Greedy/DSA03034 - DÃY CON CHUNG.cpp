#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void input(int a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void solve(int a[], int b[], int c[], int n, int m, int k) {
    int i = 0, j = 0, l = 0;
    bool ck = false;
    while (i < n && j < m && l < k) {
        if (a[i] == b[j] && a[i] == c[l]) {
            cout << a[i] << " ";
            ck = true;
            i++;
            j++;
            l++;
        } else if (a[i] <= b[j] && a[i] <= c[l]) i++;
        else if (b[j] <= c[l] && b[j] <= a[i]) j++;
        else l++; 
    }
    if (!ck) cout << "NO";
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        input(a, n);
        input(b, m);
        input(c, k);
        solve(a, b, c, n, m, k);
    }
}