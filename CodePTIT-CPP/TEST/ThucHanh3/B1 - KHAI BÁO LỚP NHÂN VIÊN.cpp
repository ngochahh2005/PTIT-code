#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
class NhanVien {
private: 
    string id = "00001", nm, sex, bd, ad, ma, ng;
public: 
    friend istream &operator>>(istream &is, NhanVien &a) {
        getline(is, a.nm);
        getline(is, a.sex);
        getline(is, a.bd);
        getline(is, a.ad);
        is >> a.ma >> a.ng;
        return is;
    }
    friend ostream &operator>>(ostream &os, NhanVien &a) {
        os << a.id << " " << a.nm << " " << a.sex << " " << a.bd << " " << a.ad << " " << a.ma << " " << a.ng;
        return os;
    }
};
  
int main() {
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}