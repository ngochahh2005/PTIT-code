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
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int cnt = 0;
        int idx = upper_bound(a, a+n, k) - a - 1;
        while (idx > 0 && a[idx] + a[idx - 1] >= k) {
            for (int i = 0; i < idx; i++) {
                if (a[idx] + a[i] == k) cnt++;
                else if(a[idx] + a[i] > k) break;
            }
            idx--;
        }
        cout << cnt << "\n";
    }
}