#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

class KhachHang;
class MatHang;
class HoaDon;
map<string, KhachHang> KH;
map<string, MatHang> MH;
int d1, d2, d3;

class KhachHang {
private:
    string id = "KH0", nm, sex, bd, ad;
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, KhachHang &a) {
        scanf("\n");
        a.ma(++d1);
        getline(is, a.nm);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.ad);
        KH[a.id] = a;
        return is;
    }
    string tenKH() { 
        return nm; 
    }
    string dc() {
        return ad;
    }
};

class MatHang {
private:
    string id = "MH0", nm, dv;
    int gm, gb;
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, MatHang &a) {
        scanf("\n");
        a.ma(++d2);
        getline(is, a.nm);
        is >> a.dv >> a.gm >> a.gb;
        MH[a.id] = a;
        return is;
    }
    string tenMH() {
        return nm;
    }
    int giaMua() {
        return gm;
    }
    int giaBan() {
        return gb;
    }
};

class HoaDon {
private:
    string id = "HD0", kh, mh;
    ll sl, tt, ln;
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, HoaDon &a) {
        a.ma(++d3);
        is >> a.kh >> a.mh >> a.sl;
        a.tt = (ll)MH[a.mh].giaBan() * a.sl;
        a.ln = (ll)a.tt - MH[a.mh].giaMua() * a.sl;
        return is;
    }
    friend ostream &operator<<(ostream &os, HoaDon &a) {
        os << a.id << " " << KH[a.kh].tenKH() << " " << KH[a.kh].dc() << " " << MH[a.mh].tenMH() << " ";
        os << a.sl << " " << a.tt << " " << a.ln << "\n";
        return os;
    }
    friend bool operator<(const HoaDon &a, const HoaDon &b) {
        if (a.ln == b.ln) return MH[a.mh].tenMH() > MH[b.mh].tenMH();
        return a.ln > b.ln;
    }
};

void sapxep(HoaDon a[], int n) {
    sort(a, a+n);
}

int main() {
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}