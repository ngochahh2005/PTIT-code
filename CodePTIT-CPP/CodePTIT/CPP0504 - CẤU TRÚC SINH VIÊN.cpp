#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct SinhVien {
    string nm, cl, bd, id;
    float d;
};

void nhap(SinhVien &a) {
    getline(cin, a.nm);
    a.id = "B20DCCN001";
    cin >> a.cl >> a.bd;
    cin >> a.d;
}

void in(SinhVien a) {
    cout << a.id << " " << a.nm << " " << a.cl << " ";
    stringstream ss(a.bd);
    string tok;
    bool ck = false;
    while (getline(ss, tok, '/')) {
        if (tok.length() == 1) tok = "0" + tok;
        if (ck == false) {
            cout << tok;
            ck = true;
        } else cout << "/" << tok;
    }
    cout << " " << setprecision(2) << fixed << a.d;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct SinhVien a;
    nhap(a);
    in(a);
}