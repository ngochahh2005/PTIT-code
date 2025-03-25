#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[lmt+5], b[lmt+5], rs[2*lmt+5];

void ghep(int m, int n) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            rs[k] = a[i];
            i++;
        } else{
            rs[k] = b[j];
            j++;
        }
        k++;
    }
    while (i < m) {
        rs[k] = a[i];
        k++;
        i++;
    }
    while (j < n) {
        rs[k] = b[j];
        k++;
        j++;
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> m >> n >> k;
        for (int i = 0; i < m; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        ghep(m, n);
        cout << rs[k-1] << "\n";
    }
}