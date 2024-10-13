#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct ThiSinh {
    string nm, bd;
    float d1, d2, d3, d;
};

void nhap(ThiSinh &a) {
    getline(cin, a.nm);
    cin >> a.bd;
    cin >> a.d1 >> a.d2 >> a.d3;
    a.d = a.d1 + a.d2 + a.d3;
}

void in(ThiSinh a) {
    cout << a.nm << " " << a.bd << " " << setprecision(1) << fixed << a.d;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}