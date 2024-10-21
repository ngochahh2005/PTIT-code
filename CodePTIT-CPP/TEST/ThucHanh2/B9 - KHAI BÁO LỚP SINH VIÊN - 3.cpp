#include <bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
        string id, nm, cl, bd;
        float gpa = 0.0;
        void chTen() {
            transform(nm.begin(), nm.end(), nm.begin(), ::tolower);
            stringstream ss(nm);
            string res = "";
            string w;
            while (ss >> w) {
                w[0] = toupper(w[0]);
                res += w + " ";
            }
            nm = res;
        }
        void chBD() {
            stringstream ss(bd);
            string w;
            vector<string> v;
            while(getline(ss, w, '/')) {
                if (w.length() == 1) w = "0" + w;
                v.emplace_back(w);
            }
            bd = v[0] + "/" + v[1] + "/" + v[2];
        }
    public:
        SinhVien() {
            id = "B20DCCN001";
        }
        friend istream& operator>>(istream& is, SinhVien& a) {
            getline(is, a.nm);
            is >> a.cl;
            is >> a.bd;
            is >> a.gpa;
            return is;
        }
        friend ostream& operator<<(ostream& os, SinhVien& a) {
            a.chBD();
            a.chTen();
            os << a.id << " " << a.nm << a.cl << " " << a.bd << " ";
            os << fixed << setprecision(2) << a.gpa;
            return os;
        }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}