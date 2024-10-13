#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int thang(int y, int n) {
    if (n <= 31) return 1;
    n -= 31;
    int d = 0;
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        d = 1;
    }
    if (n <= 28 + d) return 2;
    n -= (28 + d);
    if (n <= 31) return 3;
    n -= 31;
    if (n <= 30) return 4;
    n -= 30;
    if (n <= 31) return 5;
    n -= 31;
    if (n <= 30) return 6;
    n -= 30;
    if (n <= 31) return 7;
    n -= 31;
    if (n <= 31) return 8;
    n -= 31;
    if (n <= 30) return 9;
    n -= 30;
    if (n <= 31) return 10;
    n -= 31;
    if (n <= 30) return 11;
    return 12;
}

string mua(string m, int t) {
    if (m == "Bac") {
        if (t >= 2 && t <= 4) return "Xuan";
        if (t >= 5 && t <= 7) return "He";
        if (t >= 8 && t <= 10) return "Thu";
        return "Dong";
    } else {
        if (t >= 11 || t <= 4) return "Kho";
        else return "Mua";
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string m;
        cin >> m;
        int y, n;
        cin >> y >> n;
        int th = thang(y, n);
        cout << mua(m, th) << "\n";
    }
}