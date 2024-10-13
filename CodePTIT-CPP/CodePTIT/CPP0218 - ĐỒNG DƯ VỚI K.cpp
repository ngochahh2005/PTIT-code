#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int a[100005];

int solve(int a[], int n) {
    int k = *max_element(a, a+n);
    int tmp = -1, cnt = 0;
    bool ck = true;
    for (int i = 1; i <= k; i++) {
        tmp = a[0] % i;
        ck = true;
        for (int j = 1; j < n; j++) {
            if (a[j] % i != tmp) {
                ck = false;
                break;
            }
        }
        if (ck) cnt++;
    }
    return cnt;
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
        bool ck = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i != 0 && a[i] != a[i-1]) ck = true;
        }
        if (!ck) cout << "0\n";
        else cout << solve(a, n) << "\n";
    }
}