#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int max3(int a, int b, int c) {
    return max(a, max(b, c));
}

int maxCrossingSum(int a[], int l, int m, int r) {
    int sum = 0, ls = INT_MIN, rs = INT_MIN;
    for (int i = m; i >= l; i--) {
        sum += a[i];
        ls = max(sum, ls);
    }
    sum = 0;
    for (int i = m+1; i <= r; i++) {
        sum += a[i];
        rs = max(rs, sum);
    }
    return ls + rs;
}

int maxSubArray(int a[], int l, int r) {
    if (l == r) return a[l];
    int m = (r + l)/2;
    return max3(maxSubArray(a, l, m), maxSubArray(a, m+1, r), maxCrossingSum(a, l, m, r));
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
        cout << maxSubArray(a, 0, n-1) << "\n";
    }
}