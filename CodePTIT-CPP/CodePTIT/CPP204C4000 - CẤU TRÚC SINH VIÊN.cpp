#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct SinhVien {
    string id = "N20DCCN001", nm, cl, bd;
    float gpa;

    void chuanHoa() {
        stringstream ss(bd);
        string w;
        vector<string> s;
        while (getline(ss, w, '/')) {
            if (w.length() == 1) w = "0" + w;
            s.emplace_back(w);
        }
        bd = s[0] + "/" + s[1] + "/" + s[2];
    }
};

void nhapThongTinSV(SinhVien &a) {
    getline(cin, a.nm);
    cin >> a.cl >> a.bd >> a.gpa;
}

void inThongTinSV(SinhVien a) {
    a.chuanHoa();
    cout << a.id << " " << a.nm << " " << a.cl << " " << a.bd << " ";
    cout << setprecision(2) << fixed << a.gpa;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
}