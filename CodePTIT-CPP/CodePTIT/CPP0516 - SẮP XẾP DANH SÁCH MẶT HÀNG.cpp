#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct data {
    int ma;
    double m, b, ln;
    string th, nh;
};

bool cmp(data a, data b) {
    return a.ln > b.ln;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    data a[n];
    for (int i = 0; i < n; i++) {
        cin.ignore();
        a[i].ma = i+1;
        getline(cin, a[i].th);
        getline(cin, a[i].nh);
        cin >> a[i].m >> a[i].b;
        a[i].ln = a[i].b - a[i].m;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].ma << " " << a[i].th << " " << a[i].nh << " " << fixed << setprecision(2) << a[i].ln << "\n";
    }
}