#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int d;

class gv {
private:
    string nm, m, id = "GV";
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
    void mon() {
        stringstream ss(m);
        string w, res = "";
        while (ss >> w) {
            res += toupper(w[0]);
        }
        m = res;
    }
public:
    friend istream &operator>>(istream &is, gv &a) {
        getline(is, a.nm);
        getline(is, a.m);
        a.ma(++d);
        a.mon();
        return is;
    }
    friend ostream &operator<<(ostream &os, gv &a) {
        os << a.id << " " << a.nm << " " << a.m << "\n";
        return os;
    }
    friend bool operator==(const gv &a, const string &b) {
        return a.m == b;
    }
};

string mon(string m) {
    stringstream ss(m);
    string w, res = "";
    while (ss >> w) {
        res += toupper(w[0]);
    }
    return res;
}
  
int main() {
    int n, q;
    cin >> n;
    gv a[1005];
    cin.ignore();
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    cin.ignore();
    string s;
    while (q--) {
        getline(cin, s);
        s = mon(s);
        cout << "DANH SACH GIANG VIEN BO MON " << s << ":\n";
        for (int i = 0; i < n; i++) {
            if (a[i] == s) cout << a[i];
        }
    }
}