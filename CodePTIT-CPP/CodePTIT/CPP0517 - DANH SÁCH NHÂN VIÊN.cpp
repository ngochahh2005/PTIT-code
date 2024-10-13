#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct NhanVien {
    string nm, gt, bd, dc, t, d;
    int id;
};

bool ck = false;

void nhap(NhanVien &a) {
    if (ck == false) {
        ck = true;
        cin.ignore();
    }
    getline(cin, a.nm);
    getline(cin, a.gt);
    getline(cin, a.bd);
    getline(cin, a.dc);
    getline(cin, a.t);
    getline(cin, a.d);
}

void inds(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        a[i].id = i+1;
        if (a[i].id < 10) cout << "0000" << a[i].id << " ";
        else cout << "000" << a[i].id << " ";
        cout << a[i].nm << " " << a[i].gt << " " << a[i].bd << " " << a[i].dc << " " << a[i].t << " " << a[i].d << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
}