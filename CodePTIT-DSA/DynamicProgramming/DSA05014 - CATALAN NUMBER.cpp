#include <bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

class bigInt {
private:
    string n;
    bigInt mul(string a, int b) {
        int nho = 0, kq = 0, l = a.length();
        string rs(l, 0);
        for (int i = l-1; i >= 0; i--) {
            kq = (a[i] - '0') * b + nho;
            rs[i] = (kq % 10) + '0';
            nho = kq / 10;
        }
        if (nho > 0) rs = to_string(nho) + rs;
        bigInt c; c.n = rs;
        return c;
    }
public:
    bigInt(string num = "0") {
        n = num;
    }
    friend bigInt operator+(bigInt s1, bigInt s2) {
        string a = s1.n, b = s2.n;
        int n1 = a.length(), n2 = b.length();
        int l = max(n1, n2);
        string rs(l, 0);
        int nho = 0, i = n1 - 1, j = n2 - 1, kq = 0, k = l-1;
        while (i >= 0 || j >= 0) {
            kq = nho;
            if (i >= 0) kq += (a[i--] - '0');
            if (j >= 0) kq += (b[j--] - '0');
            rs[k--] = (kq % 10) + '0';
            nho = kq / 10;
        }
        if (nho > 0) rs = to_string(nho) + rs;
        bigInt c;
        c.n = rs;
        return c;
    }
    friend bigInt operator*(bigInt s1, bigInt s2) {
        string a = s1.n, b = s2.n;
        int n1 = a.length(), n2 = b.length();
        bigInt rs;
        rs.n = "0";
        for (int i = n2-1; i >= 0; i--) {
            int dg = b[i] - '0';
            bigInt tmp = s1.mul(a, dg);
            for (int j = 0; j < n2 - 1 - i; j++) tmp.n += "0";
            rs = rs + tmp;
        } 
        return rs;
    }
    friend istream &operator>>(istream &is, bigInt &a) {
        is >> a.n;
        return is;
    }
    friend ostream &operator<<(ostream &os, const bigInt &a) {
        os << a.n;
        return os;
    }
};

bigInt c[105];

void catalan() {
    c[0] = bigInt("1");
    for (int i = 1; i <= 100; i++) {
        int l = 0, r = i-1;
        while (l <= i-1 && r >= 0) {
            c[i] = c[i] + c[l] * c[r];
            l++;
            r--;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    catalan();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << c[n] << "\n";
    }
}