#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct SinhVien {
    string id, nm, cl;
    double d1, d2, d3;
};

void nhap(SinhVien &a) {
    cin >> a.id;
    cin.ignore();
    getline(cin, a.nm);
    cin >> a.cl >> a.d1 >> a.d2 >> a.d3;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.id < b.id;
}

void sap_xep(SinhVien a[], int n) {
    sort(a, a+n, cmp);
}

void in_ds(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << a[i].id << " " << a[i].nm << " " << a[i].cl << " ";
        cout << fixed << setprecision(1) << a[i].d1 << " " << a[i].d2 << " " << a[i].d3 << "\n"; 
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}