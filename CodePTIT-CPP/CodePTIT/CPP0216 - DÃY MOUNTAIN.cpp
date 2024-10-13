#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(int a[], int l, int r) {
    bool tang = false;
    int pos = r;
    for (int i = l; i < r; i++) {
        if (a[i] > a[i+1]) {
            for (int j = i; j < r; j++) {
                if (a[j] < a[j+1]) return false;
            }
        }
    }
    return true;
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
        int l, r;
        cin >> l >> r;
        if (check(a, l, r)) cout << "Yes\n";
        else cout << "No\n";
    }
}