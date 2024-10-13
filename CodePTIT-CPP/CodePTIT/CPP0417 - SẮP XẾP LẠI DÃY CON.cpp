#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

struct data {
    int idx, vl;
};

data a[lmt];

bool cmp(data a, data b) {
    if (a.vl == b.vl) return a.idx < b.idx;
    return a.vl < b.vl;
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
        for (int i = 0; i < n; i++) {
            a[i].idx = i;
            cin >> a[i].vl;
        }
        sort(a, a+n, cmp);
        int dau = -1, cuoi = -1;
        for (int i = 0; i < n; i++) {
            if (a[i].idx != i) {
                if (dau == -1) dau = i + 1;
                else cuoi = i + 1;
            }
        }
        cout << dau << " " << cuoi << "\n";
    }
}