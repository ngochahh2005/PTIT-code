#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct sinhVien {
    string id, nm, cl;
    double d1, d2, d3;
};

void nhap(sinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].id);
        getline(cin, a[i].nm);
        cin >> a[i].cl >> a[i].d1 >> a[i].d2 >> a[i].d3;
    }
}

bool cmp(sinhVien a, sinhVien b) {
    return a.nm < b.nm;
}

void in(sinhVien a[], int n) {
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << a[i].id << " " << a[i].nm << " " << a[i].cl << " " << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    sinhVien a[n];
    nhap(a, n);
    in(a, n);
}