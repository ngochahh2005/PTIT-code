#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

char m1[15] = {'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
char m2[15] = {'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

double diem(char m[]) {
    char ch;
    double res = 0;
    for (int i = 0; i < 15; i++) {
        cin >> ch;
        if (ch == m[i]) res += (double)10/15;
    }
    return res;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int ma;
        cin >> ma;
        if (ma == 101) cout << setprecision(2) << fixed << diem(m1) << "\n";
        else cout << setprecision(2) << fixed << diem(m2) << "\n";
    }
}