#include <bits/stdc++.h>
#define ll long long
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
        int *a = new int[n];
        int ma = -1, vl = -1;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n-1; i++) {
            for (int j = n-1; j >= i+1; j--) {
                if (a[j] >= a[i]) {
                    // cout << i << " " << j << "\n";
                    vl = j - i;
                    break;
                }
            }
            ma = max(ma, vl);
        }
        cout << ma << "\n";
    }
}