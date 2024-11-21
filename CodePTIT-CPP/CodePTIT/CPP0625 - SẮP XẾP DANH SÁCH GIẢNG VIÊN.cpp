#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int cnt = 0;

class gv {
private:
    string id = "GV", nm, mh, t;
    void ten() {
        stringstream ss(nm);
        string w;
        while (ss >> w) {
            t = w;
        }
    }
    void ma(int n) {
        if (n < 10) id += "0";
        id += to_string(n);
    }
    void mon() {
        stringstream ss(mh);
        string w, res = "";
        while (ss >> w) {
            res += toupper(w[0]);
        }
        mh = res;
    }
public:
    friend istream &operator>>(istream &is, gv &a) {
        getline(is, a.nm);
        getline(is, a.mh);
        a.ten();
        a.ma(++cnt);
        a.mon();
        return is;
    }
    friend ostream &operator<<(ostream &os, gv &a) {
        os << a.id << " " << a.nm << " " << a.mh << "\n";
        return os;
    }
    friend bool operator<(const gv &a, const gv &b) {
        if (a.t == b.t) return a.id < b.id;
        return a.t < b.t;
    }
};

  
int main() {
    int n;
    cin >> n;
    cin.ignore();
    gv a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++) cout << a[i];
}