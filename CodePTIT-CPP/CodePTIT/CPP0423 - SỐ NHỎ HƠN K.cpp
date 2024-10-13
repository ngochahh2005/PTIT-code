#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int solve(int a[], int n, int k) {
    int lon = 0, nho = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= k) nho++;
    }
    for (int i = 0; i < nho; i++) {
        if (a[i] > k) lon++;
    }
    int mi = lon;
    for (int i = 1; i <= n-nho; i++) {
        if (a[i - 1] > k) lon--;
        if (a[i + nho - 1] > k) lon++;
        mi = min(mi, lon);
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
        int n, k, tmp;
        cin >> n >> k;
        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << solve(a, n, k) << "\n";
        delete[] a;
    }
}