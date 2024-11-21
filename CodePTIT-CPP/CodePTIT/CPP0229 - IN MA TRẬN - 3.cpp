#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int n, m, d;
int a[105][105];

void cheoXuong(int, int);
void cheoLen(int, int);

bool check(int h, int c) {
    if (h < n && h >= 0 && c < m && c >= 0) return true;
    return false;
}

void cheoXuong(int h, int c) {
    while (check(h, c)) {
        cout << a[h][c] << " ";
        if (h == n-1 || c == 0) break;
        h++;
        c--;
    }
    // cout << "\n" << h << "  " << c << "\n";
    if (h == n - 1 && c == m - 1) return ;
    if (check(h, c)) {
        if (c == 0 && h < n-1) cheoLen(h + 1, c);
        else cheoLen(h, c + 1);
    }
}

void cheoLen(int h, int c) {
    while (check(h, c)) {
        cout << a[h][c] << " ";
        if (h == 0 || c == m-1) break;
        h--;
        c++;
    }
    // cout << "\n-> " << h << "  " << c << "  " << m-1 << "\n";
    if (h == n - 1 && c == m - 1) return ;
    // cout << "\n-> " << h << "  " << c << "  " << m-1 << "\n";
    if (check(h, c)) {
        if (c == m-1) cheoXuong(h + 1, c);
        else cheoXuong(h, c + 1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        cout << a[0][0] << " ";
        cheoXuong(0, 1);
        cout << "\n";
    }
}