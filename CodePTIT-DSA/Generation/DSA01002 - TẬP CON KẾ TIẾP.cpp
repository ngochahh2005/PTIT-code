#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[1005];

void in(int k) {
    for (int i = 0; i < k; i++) cout << a[i] << " ";
    cout << "\n";
}

void sinh(int n, int k) {
    int i = k-1;
    while (a[i] == n-k+i+1 && i >= 0) i--;
    if (i < 0) {
        int d = 1;
        for (int i = 0; i < k; i++) {
            cout << d++ << " ";
        }
        cout << "\n";
        return;
    }
    a[i]++;
    for (int j = i+1; j < k; j++) a[j] = a[j-1] + 1;
    in(k);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < k; i++) cin >> a[i];
        sinh(n, k);
    }
}