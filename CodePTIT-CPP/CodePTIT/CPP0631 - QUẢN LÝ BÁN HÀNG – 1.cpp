#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int d1, d2, d3;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

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
        a.ma(++d2);
        scanf("\n");
        getline(is, a.nm);
        getline(is, a.dv);
        is >> a.gm >> a.gb;
        MH[a.id] = a;
        return is;
    }
    string tenMH() {
        return nm;
    }
    string donVi() {
        return dv;
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
    string id = "HD0", mk, mh;
    int sl;
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
public:
    friend istream &operator>>(istream &is, HoaDon &a) {
        a.ma(++d3);
        is >> a.mk >> a.mh >> a.sl;
        return is;
    }
    friend ostream &operator<<(ostream &os, HoaDon &a) {
        os << a.id << " " << KH[a.mk].tenKH() << " " << KH[a.mk].dc() << " ";
        os << MH[a.mh].tenMH() << " " << MH[a.mh].donVi() << " " << MH[a.mh].giaMua() << " " << MH[a.mh].giaBan() << " ";
        ll t = (ll)MH[a.mh].giaBan() * a.sl;
        cout << a.sl << " " << t << "\n";
        return os;
    }
};
 
int main(){
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
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
