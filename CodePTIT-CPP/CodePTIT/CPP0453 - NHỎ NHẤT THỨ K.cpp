#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int *a;
        a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        cout << a[k-1] << "\n";
        delete[] a;
    }
}