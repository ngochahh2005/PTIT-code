#include <bits/stdc++.h>
using namespace std;

int cnt;

class SinhVien {
    private:
        string nm, id, cl, bd;
        float d;

        void chuanHoaBD() {
            stringstream ss(bd);
            string w, s[3];
            int n = 0;
            while (getline(ss, w, '/')) {
                if (w.length() == 1) w = "0" + w;
                s[n++] = w;
            }
            bd = s[0] + "/" + s[1] + "/" + s[2];
        }
    public:
        friend istream &operator>>(istream &is, SinhVien &a) {
            cnt++;
            if (cnt >= 10) a.id = "B20DCCN0" + to_string(cnt);
            else a.id = "B20DCCN00" + to_string(cnt);
            is.ignore();
            getline(is, a.nm);
            is >> a.cl >> a.bd >> a.d;
            a.chuanHoaBD();
            return is;
        }
        friend ostream &operator<<(ostream &os, SinhVien &a) {
            os << a.id << " " << a.nm << " " << a.cl << " " << a.bd << " ";
            os << fixed << setprecision(2) << a.d << "\n";
            return os;
        }
};

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0;i < N; i++){
        cin >> ds[i];
    }
    for(i = 0; i < N; i++){
        cout << ds[i];
    }
}