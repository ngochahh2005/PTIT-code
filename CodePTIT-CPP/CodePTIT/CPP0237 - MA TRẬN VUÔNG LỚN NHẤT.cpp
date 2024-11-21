#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

char c[25][25];
int n;

int findSquare() {
    int ma = 0;
    int ng[25][25], d[25][25];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (c[i][j] == 'O') ng[i][j] = d[i][j] = 0;
            else {
                ng[i][j] = (j == 0) ? 1 : ng[i][j-1] + 1;
                d[i][j] = (i == 0) ? 1 : d[i-1][j] + 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int mi = min(ng[i][j], d[i][j]);
            while (mi > ma) {
                if (d[i][j - mi + 1] >= mi && ng[i - mi + 1][j] >= mi) ma = mi;
                mi--;
            }
        }
    }
    return ma;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> c[i][j];
            }
        }
        cout << findSquare() << "\n";
    }
}