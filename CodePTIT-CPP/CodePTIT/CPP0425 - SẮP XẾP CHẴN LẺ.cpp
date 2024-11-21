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
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int d = 0;
        for (int i = 0; i < n; i+=2) b[i] = a[d++];
        for (int i = 1; i < n; i+=2)  b[i] = a[d++];
        for (int i = 0; i < n; i++) cout << b[i] << " ";
        cout << "\n";
    }
}