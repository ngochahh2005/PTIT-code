#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

double khoangCach(double a, double b, double c, double d) {
    return sqrt(pow(a-c, 2) + pow(b-d, 2));
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        double x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << setprecision(4) << fixed << khoangCach(x1, y1, x2, y2) << "\n";
    }
}