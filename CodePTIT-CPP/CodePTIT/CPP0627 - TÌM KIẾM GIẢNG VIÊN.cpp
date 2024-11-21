#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int d;

class gv {
private:
    string id = "GV", nm, bm, m, t;
    void mon() {
        transform(bm.begin(), bm.end(), bm.begin(), ::toupper);
        stringstream ss(bm);
        string w, res = "";
        while (ss >> w) {
            res += w[0];
        }
        m = res;
    }
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
    void ten() {
        t = nm;
        transform(t.begin(), t.end(), t.begin(), ::toupper);
    }
public:
    friend istream &operator>>(istream &is, gv &a) {
        getline(is, a.nm);
        getline(is, a.bm);
        a.ma(++d);
        a.mon();
        a.ten();
        return is;
    }
    friend ostream &operator<<(ostream &os, gv &a) {
        os << a.id << " " << a.nm << " " << a.m << "\n";
        return os;
    }
    friend bool operator==(const gv &a, const string &b) {
        return a.t.find(b) != string::npos;
    }
};
  
int main() {
    int n, q;
    cin >> n;
    gv a[1005];
    scanf("\n");
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    string s;
    scanf("\n");
    while (q--) {
        getline(cin, s);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for (int i = 0; i < n; i++) {
            if (a[i] == s) cout << a[i];
        }
    }
}