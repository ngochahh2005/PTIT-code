#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct data {
    string id, nm, cl, em, sdt;
    void chTen() {
        transform(nm.begin(), nm.end(), nm.begin(), ::tolower);
        stringstream ss(nm);
        string w, res = "";
        while (ss >> w) {
            w[0] = toupper(w[0]);
            res += w + " ";
        }
        nm = res.erase(res.length() - 1);
    }
    friend istream &operator>>(istream &is, data &a) {
        getline(is, a.id);
        getline(is, a.nm);
        getline(is, a.cl);
        getline(is, a.em);
        getline(is, a.sdt);
        if(a.sdt[0] != '0') a.sdt = "0" + a.sdt;
        return is;
    }
    friend ostream &operator<<(ostream &os, data &a) {
        os << a.id << " " << a.nm << " " << a.cl << " " << a.em << " " << a.sdt << "\n";
        return os;
    }
};

bool cmp(data a, data b) {
    if (a.cl == b.cl) return a.id < b.id;
    return a.cl < b.cl;
}

data a[lmt];
  
int main() {
    int n = 0;
    ifstream fi("DANHSACH.in");
    while (fi >> a[n]) {
        a[n].chTen();
        n++;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    fi.close();
}