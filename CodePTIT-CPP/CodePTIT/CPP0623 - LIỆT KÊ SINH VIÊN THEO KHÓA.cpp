#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

class sv {
private:
    string id, nm, cl, em;
    int k;
    void khoa() {
        string s = cl.substr(1, 2);
        k = stoi(s) + 2000;
    }
public:
    friend istream &operator>>(istream &is, sv &a) {
        is >> a.id;
        scanf("\n");
        getline(is, a.nm);
        is >> a.cl >> a.em;
        a.khoa();
        return is;
    }
    friend ostream &operator<<(ostream &os, sv &a) {
        os << a.id << " " << a.nm << " " << a.cl << " " << a.em << "\n";
        return os;
    }
    friend bool operator==(const sv &a, const int &n) {
        return a.k == n;
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
        int k;
        cin >> k;
        cout << "DANH SACH SINH VIEN KHOA " << k << ":\n";
        for (int i = 0; i < n; i++) {
            if (a[i] == k) cout << a[i];
        }
    }
}