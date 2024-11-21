#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

bool check(int a[], int n) {
    ll b[n];
    for (int i = 0; i < n; i++) b[i] = (ll)a[i] * a[i];
    for (int i = n-1; i > 1; i--) {
        int l = 0, r = n-1;
        while (l < r) {
            if (b[l] + b[r] == b[i]) return true;
            else if (b[l] + b[r] > b[i]) r--;
            else l++;
        }
    }
    return false;
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
        for (int i = 0; i < n; i++) cin >> a[i];
        if (check(a, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}