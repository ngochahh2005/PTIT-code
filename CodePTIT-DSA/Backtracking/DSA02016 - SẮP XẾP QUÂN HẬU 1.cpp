#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, cnt = 0, a[15];
int col[25], xuoi[25], nguoc[25];

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (col[j] == 0 && xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0) {
            col[j] = xuoi[i-j+n] = nguoc[i+j-1] = 1;
            a[i] = j;
            if (i == n) cnt++;
            else Try(i+1);
            col[j] = xuoi[i-j+n] = nguoc[i+j-1] = 0;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        cnt = 0;
        for (int i = 1; i <= 20; i++) col[i] = xuoi[i] = nguoc[i] = 0;
        Try(1);
        cout << cnt << "\n";
    }
}