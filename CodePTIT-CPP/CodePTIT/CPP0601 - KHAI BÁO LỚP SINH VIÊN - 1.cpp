#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class SinhVien {
    private:
        string nm, id, cl, bd;
        float gpa;
    public:
        SinhVien() {
            id = "B20DCCN001";
        }   
        void nhap() {
            getline(cin, nm);
            cin >> cl >> bd;
            cin >> gpa;
        }
        void xuat() {
            cout << id << " " << nm << " " << cl << " ";
            stringstream ss(bd);
            string w;
            bool ck = false;
            while (getline(ss, w, '/')) {
                if (w.length() == 1) {
                    w = "0" + w;
                }
                if (!ck) {
                    cout << w;
                    ck = true;
                } else cout << "/" << w;
            }
            cout << " " << setprecision(2) << fixed << gpa;
        }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SinhVien a;
    a.nhap();
    a.xuat();
}