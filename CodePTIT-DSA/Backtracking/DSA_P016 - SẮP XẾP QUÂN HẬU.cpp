#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[10][10];
bool col[10], xuoi[20], nguoc[20];
int rs = 0;

void Try(int i, int s) {
    for (int j = 1; j <= 8; j++) {
        if (!col[j] && !xuoi[i-j+8] && !nguoc[i+j-1]) {
            col[j] = xuoi[i-j+8] = nguoc[i+j-1] = true;
            if (i == 8) rs = max(rs, s + a[i][j]);
            else Try(i+1, s + a[i][j]);
            col[j] = xuoi[i-j+8] = nguoc[i+j-1] = false;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for (int o = 1; o <= t; o++) {
        for (int i = 1; i <= 8; i++) {
            for (int j = 1; j <= 8; j++) {
                cin >> a[i][j];
            }
        }
        rs = 0;
        Try(1, 0);
        cout << "Test " << o << ": " << rs << "\n";
    }
}