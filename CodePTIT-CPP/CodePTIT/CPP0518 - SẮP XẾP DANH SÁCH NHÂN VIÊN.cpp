#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int j = 0;

struct NhanVien {
    string id, nm, sx, bd, ad, ms, nk;
    int s[3];
    void maNV(int n) {
        if (n >= 10) id = "000" + to_string(n);
        else id = "0000" + to_string(n);
    }
    void tach() {
        stringstream ss(bd);
        string w;
        int n = 0;
        while(getline(ss, w, '/')) {
            stringstream ss2(w);
            ss2 >> s[n++];
        }
    }
};

bool cmp(NhanVien a, NhanVien b) {
    if (a.s[2] == b.s[2]) {
        if (a.s[0] == b.s[0]) return a.s[1] < b.s[1];
        return a.s[0] < b.s[0];
    }
    return a.s[2] < b.s[2];
}

void nhap(NhanVien &a) {
    cin.ignore();
    a.maNV(++j);
    getline(cin, a.nm);
    getline(cin, a.sx);
    getline(cin, a.bd);
    a.tach();
    getline(cin, a.ad);
    getline(cin, a.ms);
    cin >> a.nk;
    // cout << a.nm << " " << a.sx << " " << a.bd << " " << a.ad << " " << a.ms << " " << a.nk << "\n"; 
}

void sapxep(NhanVien a[], int n) {
    sort(a, a+n, cmp);
}

void inds(NhanVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].nm << " " << a[i].sx << " " << a[i].bd << " " << a[i].ad << " " << a[i].ms << " " << a[i].nk << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}