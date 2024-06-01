#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct rect{
    ll d, r, s;
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	vector<rect> a(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i].d >> a[i].r;
        if (a[i].d < a[i].r) swap(a[i].d, a[i].r);
        a[i].s = a[i].d * a[i].r;
    }

    ll ma = max(a[0].d, max(a[1].d, a[2].d));
    if ((a[0].s + a[1].s + a[2].s) == ma * ma) cout << ma;
    else cout << 0;
}
