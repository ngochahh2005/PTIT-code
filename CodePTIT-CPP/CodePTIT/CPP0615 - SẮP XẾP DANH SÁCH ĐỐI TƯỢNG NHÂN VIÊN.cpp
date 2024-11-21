#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int cnt = 0;

class NhanVien {
private:
    string id = "000", nm, sex, bd, ad, ma, ng;
    int d, m, y;
    void maNV(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
    void tach() {
        stringstream ss(bd);
        string w, s[3];
        int n = 0;
        while(getline(ss, w, '/')) {
            if(w.size() == 1) w = "0" + w;
            s[n++] = w;
        }
        d = stoi(s[1]);
        m = stoi(s[0]);
        y = stoi(s[2]);
    }
public:
    friend istream &operator>>(istream &is, NhanVien &a) {
        scanf("\n");
        getline(is, a.nm);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.ad);
        is >> a.ma >> a.ng;
        cnt++;
        a.maNV(cnt);
        a.tach();
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a) {
        os << a.id << " " << a.nm << " " << a.sex << " " << a.bd << " " << a.ad << " " << a.ma << " " << a.ng << "\n";
        return os;
    }
    friend bool operator<(const NhanVien &a, const NhanVien &b) {
        if (a.y == b.y) {
            if (a.m == b.m) {
                return a.d < b.d;
            }
            return a.m < b.m;
        }
        return a.y < b.y;
    }
};

void sapxep(NhanVien a[], int n) {
    sort(a, a+n);
}

int main() {
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}