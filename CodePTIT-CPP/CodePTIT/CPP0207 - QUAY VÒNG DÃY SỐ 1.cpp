#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = d; i < n; i++) cout << a[i] << " ";
        for (int i = 0; i < d; i++) cout << a[i] << " ";
        cout << "\n";
    }
}