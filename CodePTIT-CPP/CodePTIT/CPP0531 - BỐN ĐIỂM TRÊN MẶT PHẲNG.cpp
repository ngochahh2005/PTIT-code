#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

struct point {
    int x, y, z;
    friend istream &operator>>(istream &is, point &a) {
        is >> a.x >> a.y >> a.z;
        return is;
    }
};

point tichCoHuong(point a, point b) {
    point c;
    c.x = a.y * b.z - a.z * b.y;
    c.y = a.z * b.x - a.x * b.z;
    c.z = a.x * b.y - a.y * b.x;
    return c;
}

point vec(point a, point b) {
    point c;
    c.x = b.x - a.x;
    c.y = b.y - a.y;
    c.z = b.z - a.z;
    return c;
}

int tichVoHuong(point a, point b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

bool check(point a, point b, point c, point d) {
    point ab = vec(a, b);
    point ac = vec(a, c);
    point ad = vec(a, d);
    point t = tichCoHuong(ac, ad);
    if (tichVoHuong(ab, t) == 0) return true;
    return false;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        point a, b, c, d;
        cin >> a >> b >> c >> d;
        if (check(a, b, c, d)) cout << "YES\n";
        else cout << "NO\n";
    }
}