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
        cin >> k >> n;
        int a[n*k];
        for (int i = 0; i < n*k; i++) {
            cin >> a[i];
        }
        sort(a, a+n*k);
        for (int i = 0; i < n*k; i++) cout << a[i] << " ";
        cout << "\n";
    }
}