#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct data {
    int nb, idx;
};

bool cmp(data a, data b) {
    if (a.nb == b.nb) return a.idx < b.idx;
    return a.nb < b.nb;
}

data a[lmt];
  
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
            cin >> a[i].nb;
            a[i].idx = i;
        }
        sort(a, a+n, cmp);
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i].nb != a[a[i].idx].nb) {
                if (l == -1) l = i+1;
                else r = i+1;
            }
        }
        cout << l << " " << r << "\n";
    }
}