#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int cnt;

class NhanVien {
private:
    string id = "000", nm, sex, bd, ad, ma, d;
    void maNV(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, NhanVien &a) {
        cnt++;
        scanf("\n");
        getline(is, a.nm);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.ad);
        is >> a.ma >> a.d;
        a.maNV(cnt);
        return is;
    }
    friend ostream &operator<<(ostream &os, NhanVien &a) {
        os << a.id << " " << a.nm << " " << a.sex << " " << a.bd << " " << a.ad << " " << a.ma << " " << a.d << "\n";
        return os;
    }
};

int main() {
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) cin >> ds[i];
    for(i = 0; i < N; i++) cout << ds[i];
    return 0;
}