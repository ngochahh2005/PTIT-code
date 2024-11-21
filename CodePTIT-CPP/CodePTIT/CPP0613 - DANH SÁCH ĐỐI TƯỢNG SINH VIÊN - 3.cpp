#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int cnt = 0;

class SinhVien {
private:
    string id, nm, cl, bd;
    float d;
    void chTen() {
        transform(nm.begin(), nm.end(), nm.begin(), ::tolower);
        stringstream ss(nm);
        string w, res = "";
        while (ss >> w) {
            w[0] = toupper(w[0]);
            res += w + " ";
        }
        nm = res;
    }
    void chBD() {
        stringstream ss(bd);
        string w, s[3];
        int n = 0;
        while (getline(ss, w, '/')) {
            if (w.size() == 1) w = "0" + w;
            s[n++] = w;
        }
        bd = s[0] + "/" + s[1] + "/" + s[2];
    }
    void msv(int n) {
        id = "B20DCCN0";
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, SinhVien &a) {
        cnt++;
        scanf("\n");
        a.msv(cnt);
        getline(is, a.nm);
        a.chTen();
        getline(is, a.cl);
        getline(is, a.bd);
        a.chBD();
        is >> a.d;
        return is;
    }
    friend bool operator<(const SinhVien &a, const SinhVien &b) {
        return a.d > b.d;
    }
    friend ostream &operator<<(ostream &os, SinhVien &a) {
        os << a.id << " " << a.nm << a.cl << " " << a.bd << " ";
        os << fixed << setprecision(2) << a.d << "\n";
        return os;
    }
};

void sapxep(SinhVien a[], int n) {
    sort(a, a + n);
}
  
int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
