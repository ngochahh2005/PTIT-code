#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

class sv {
private:
    string id, nm, cl, em;
public:
    friend istream &operator>>(istream &is, sv &a) {
        is >> a.id;
        scanf("\n");
        getline(is, a.nm);
        is >> a.cl >> a.em;
        return is;
    }
    friend ostream &operator<<(ostream &os, sv &a) {
        os << a.id << " " << a.nm << " " << a.cl << " " << a.em << "\n";
        return os;
    }
    friend bool operator==(const sv &a, const string &b) {
        return a.cl == b;
    }
};
  
int main() {
    int n;
    cin >> n;
    sv a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":\n";
        for (int i = 0; i < n; i++) {
            if (a[i] == s) cout << a[i];
        }
    }
}