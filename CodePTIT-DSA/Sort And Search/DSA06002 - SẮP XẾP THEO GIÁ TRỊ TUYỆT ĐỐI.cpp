#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int x;

struct data {
    int nb, idx;
};

bool cmp(data a, data b) {
    a.nb = abs(x-a.nb);
    b.nb = abs(x-b.nb);
    if (a.nb == b.nb) return a.idx < b.idx;
    return a.nb < b.nb;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n >> x;
        data a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i].nb;
            a[i].idx = i;
        }
        sort(a, a+n, cmp);
        for (int i = 0; i < n; i++) cout << a[i].nb << " ";
        cout << "\n";
    }
}