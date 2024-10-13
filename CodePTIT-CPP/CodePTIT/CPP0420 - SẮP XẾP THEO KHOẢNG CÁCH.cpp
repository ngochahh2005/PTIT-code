#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct data {
    int vl, idx, x;
};

bool cmp (data a, data b) {
    if (a.x == b.x) return a.idx < b.idx;
    return a.x < b.x;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, X;
        cin >> n >> X;
        data a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].vl;
            a[i].x = abs(X - a[i].vl);
            a[i].idx = i;
        }
        sort(a, a+n, cmp);
        for (int i = 0; i < n; i++) {
            cout << a[i].vl << " ";
        }
        cout << "\n";
    }
}