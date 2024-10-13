#include <bits/stdc++.h>
#define ll long long
#define pi 3.141592653589793238
using namespace std;

struct toado {
    double x, y;
};

double doDai(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool check(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) return true;
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        toado a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i].x >> a[i].y;
        }
        double c1, c2, c3;
        c1 = doDai(a[0].x, a[0].y, a[1].x, a[1].y);
        c2 = doDai(a[2].x, a[2].y, a[1].x, a[1].y);
        c3 = doDai(a[0].x, a[0].y, a[2].x, a[2].y);
        if (!check(c1, c2, c3)) cout << "INVALID\n";
        else {
            double s = 1.0/4 * sqrt((c1 + c2 + c3) * (c1 + c2 - c3) * (c2 + c3 - c1) * (c3 + c1 - c2));
            double r = c1 * c2* c3 / (4 * s);
            double st = pi * r * r;
            cout << fixed << setprecision(3) << st << "\n";
        }
    }
}