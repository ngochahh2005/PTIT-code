#include <bits/stdc++.h>
using namespace std;

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int n;
    while(t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        prev_permutation(a, a+n);
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}