#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

class SinhVien {
    private:
        string id, nm, cl, bd;
        float gpa;
    public:
        SinhVien() {
            id = "B20DCCN001";
        }
        friend istream& operator>>(istream& is, SinhVien& sv) {
            getline(is, sv.nm);
            is >> sv.cl;
            is >> sv.bd;
            is >> sv.gpa;
            return is;
        }
        friend ostream& operator<<(ostream& os, SinhVien& sv) {
            os << sv.id << " " << sv.nm << " " << sv.cl << " ";
            stringstream ss(sv.bd);
            string w;
            bool ck = false;
            while (getline(ss, w, '/')) {
                if (w.length() == 1) w = "0" + w;
                if (!ck) {
                    cout << w;
                    ck = true;
                } else os << "/" << w;
            }
            os << " " << setprecision(2) << fixed << sv.gpa;
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