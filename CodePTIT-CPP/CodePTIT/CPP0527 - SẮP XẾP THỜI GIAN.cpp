#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct tg {
    int h, m, s;
};

bool cmp(tg a, tg b) {
    if (a.h == b.h) {
        if (a.m == b.m) return a.s < b.s;
        return a.m < b.m;
    }
    return a.h < b.h;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    tg a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].h >> a[i].m >> a[i].s;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].h << " " << a[i].m << " " << a[i].s << "\n";
    }
}