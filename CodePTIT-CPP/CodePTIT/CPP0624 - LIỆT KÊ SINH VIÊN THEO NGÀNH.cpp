#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

class sv {
private:
    string id, nm, cl, em, ng;
    void nganh() {
        if (id.find("DCKT") != string::npos) ng = "Ke toan";
        else if (id.find("DCCN") != string::npos && cl.find("E") == string::npos) ng = "Cong nghe thong tin";
        else if (id.find("DCAT") != string::npos && cl.find("E") == string::npos) ng = "An toan thong tin";
        else if (id.find("DCVT") != string::npos) ng = "Vien thong";
        else if (id.find("DCDT") != string::npos) ng = "Dien tu";
    }
public:
    friend istream &operator>>(istream &is, sv &a) {
        is >> a.id;
        scanf("\n");
        getline(is, a.nm);
        is >> a.cl >> a.em;
        a.nganh();
        return is;
    } 
    friend ostream &operator<<(ostream &os, sv &a) {
        os << a.id << " " << a.nm << " " << a.cl << " " << a.em << "\n";
        return os;
    }
    friend bool operator==(const sv &a, const string &b) {
        return a.ng == b;
    }
};

int main() {
    int n, q;
    cin >> n;
    sv a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> q;
    scanf("\n");
    string str, s;
    while (q--) {
        getline(cin, str);
        s = str;
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << "DANH SACH SINH VIEN NGANH " << str << ":\n";
        for (int i = 0; i < n; i++) {
            if (a[i] == s) cout << a[i];
        }
    }
}