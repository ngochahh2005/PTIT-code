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
        int n;
        cin >> n;
        int *a;
        a = new int[n];
        int d = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++) {
            if (a[i] != 0 && a[i] == a[i+1]) {
                a[i] *= 2;
                a[i+1] = 0;
            }
            if (a[i] == 0) d++;
        }
        if (a[n-1] == 0) d++;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) cout << a[i] << " ";
        }
        for (int i = 0; i < d; i++) cout << "0 ";
        cout << "\n";
        delete[] a;
    }
}