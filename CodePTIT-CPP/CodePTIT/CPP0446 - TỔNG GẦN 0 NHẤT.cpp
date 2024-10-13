#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int solve(int a[], int n) {
    int mi = 1e6;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            mi = abs(a[i] + a[j]) < abs(mi) ? a[i] + a[j] : mi;
        }
    }
    return mi;
}

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
        cout << solve(a, n) << "\n";
    }
}
