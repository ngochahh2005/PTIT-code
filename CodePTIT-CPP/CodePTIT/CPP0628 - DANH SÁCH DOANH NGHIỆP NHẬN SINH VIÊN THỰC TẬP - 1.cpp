#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

class dn {
private:
    string id, nm;
    int sl;
public:
    friend istream &operator>>(istream &is, dn &a) {
        is >> a.id;
        is.ignore();
        getline(is, a.nm);
        is >> a.sl;
        return is;
    }
    friend ostream &operator<<(ostream &os, dn &a) {
        os << a.id << " " << a.nm << " " << a.sl << "\n";
        return os;
    }
    friend bool operator<(const dn &a, const dn &b) {
        if (a.sl == b.sl) return a.id < b.id;
        return a.sl > b.sl;
    }
};

  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    dn a[1005];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i++) cout << a[i];
}