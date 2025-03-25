#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
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
        ll *a;
        a = new ll[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int rs = 0;
        for (int i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                rs = i+1;
                break;
            }
        }
        cout << rs << "\n";
    }
}