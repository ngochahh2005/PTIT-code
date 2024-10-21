#include <bits/stdc++.h>
using namespace std;

struct data {
    string mp, nc, tp, mtl, ttl;
    int st, d, y, m;
    void tach() {
        stringstream ss(nc);
        string w;
        int a[3];
        int n = 0;
        while(getline(ss, w, '/')) {
            int tmp = 0;
            for (int i = 0; i < w.size(); i++) {
                tmp = tmp * 10 + (w[i] - '0');
            }
            a[n++] = tmp;
        }
        d = a[0]; m = a[1]; y = a[2];
    }
};

bool cmp(data a, data b) {
    if (a.nc == b.nc) {
        if (a.tp == b.tp) return a.st > b.st;
        return a.tp < b.tp;
    }
    if (a.y == b.y) {
        if (a.m == b.m) return a.d < b.d;
        return a.m < b.m;
    }
    return a.y < b.y;
}

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    map<string, string> myMp;
    string maTL, tenTL;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        maTL = "TL00" + to_string(i + 1);
        getline(cin, tenTL);
        myMp[maTL] = tenTL;
    }
    data a[m];
    for (int i = 0; i < m; i++) {
        a[i].mp = "P00" + to_string(i+1);
        cin >> a[i].mtl;
        a[i].ttl = myMp[a[i].mtl];
        cin >> a[i].nc;
        cin.ignore();
        getline(cin, a[i].tp);
        cin >> a[i].st;
        a[i].tach();
    }
    sort(a, a+m, cmp);
    for (int i = 0; i < m; i++) {
        cout << a[i].mp << " " << a[i].ttl << " " << a[i].nc << " " << a[i].tp << " " << a[i].st << "\n";
    }
}