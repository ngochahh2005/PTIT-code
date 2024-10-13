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
        int maxlen = 0;
        int l[n];
        fill(l, l+n, 0);
        for (int i = 0; i < n; i++) {
            int dp = lower_bound(l, l+maxlen, a[i]) - l;
            if (dp == maxlen) {
                maxlen++;
                l[dp] = a[i];
            } else l[dp] = min(l[dp], a[i]);
        }
        cout << maxlen << "\n";
    }
}