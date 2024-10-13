#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void thaoTac(int n, int &nhan, int &cong) {
    while (n > 0) { 
        if (n % 2 != 0) cong++;
        n /= 2;
        if (n != 0) nhan++;
    }
}

struct data {
    int add = 0, mul = 0;
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        data p[n];
        int ma = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            thaoTac(a[i], p[i].mul, p[i].add);
            ma = max(ma, p[i].mul);
        }
        for (int i = 0; i < n; i++) {
            // cout << p[i].add << " " << p[i].mul << "\n";
            ma += p[i].add;
        }
        cout << ma << "\n";
    }
}