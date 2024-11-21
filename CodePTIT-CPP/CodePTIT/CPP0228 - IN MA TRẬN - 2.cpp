#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int n, a[45][45];

void traiTren(int, int, int);
void phaiDuoi(int, int, int);

void traiTren(int h, int c, int d) {
    if (h == n/2 && c == n/2 - 1) {
        cout << a[h--][c] << " ";
    }
    for (int i = h; i > h - d && i >= 0; i--) cout << a[i][c] << " ";
    h -= d - 1;
    if (h < 0) return ;
    for (int i = c + 1; i <= c + d && i < n; i++) cout << a[h][i] << " ";
    if (c < n && c >= 0 && h < n && h >= 0) phaiDuoi(h + 1, c + d, d + 2);
}

void phaiDuoi(int h, int c, int d) {
    if (h == n/2 - 1 && c == n/2) {
        cout << a[h++][c] << " ";
    }
    for (int i = h; i < h + d && i < n; i++) cout << a[i][c] << " ";
    h += d - 1;
    if (h >= n) return ;
    for (int i = c-1; i >= c - d && i >= 0; i--) cout << a[h][i] << " ";
    if (c < n && c >= 0 && h < n && h >= 0) traiTren(h - 1, c - d, d + 2);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        n *= 4;
        int d = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a[i][j] = d++;
            }
        }
        traiTren(n/2, n/2 - 1, 2);
        cout << "\n";
        phaiDuoi(n/2 - 1, n/2, 2);
        cout << "\n";
    }
}