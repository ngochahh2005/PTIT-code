#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class SinhVien {
    private:
        string id, nm, cl, bd;
        float gpa;

        void chuanHoaBD() {
            stringstream ss(bd);
            string w;
            vector<string> v;
            while (getline(ss, w, '/')) {
                if (w.length() == 1) w = "0" + w;
                v.emplace_back(w);
            }
            bd = v[0] + "/" + v[1] + "/" + v[2];
        }

        void chuanHoaTen() {
            transform(nm.begin(), nm.end(), nm.begin(), ::tolower);
            stringstream ss(nm);
            string w;
            vector<string> res;
            while(ss >> w) {
                w[0] = toupper(w[0]);
                res.emplace_back(w);
            }
            string kq = "";
            for (int i = 0; i < res.size(); i++) {
                kq = kq + res[i] + " ";
            }
            nm = kq;
        }
    public:
        SinhVien() {
            id = "B20DCCN001";
            nm = "";
            cl = "";
            bd = "";
            gpa = 0.0;
        }
        friend istream& operator>>(istream& is, SinhVien& a) {
            getline(is, a.nm);
            is >> a.cl;
            is >> a.bd;
            is >> a.gpa;
            return is;
        }
        friend ostream& operator<<(ostream& os, SinhVien& a) {
            a.chuanHoaTen();
            a.chuanHoaBD();
            os << a.id << " " << a.nm << a.cl << " " << a.bd << " ";
            os << setprecision(2) << fixed << a.gpa;
            return os;
        }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SinhVien a;
    cin >> a;
    cout << a;
}