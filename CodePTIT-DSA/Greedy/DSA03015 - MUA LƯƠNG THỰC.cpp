#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int solve(int n, int s, int m) {
    if (m > n) return -1;
    int x = s - (s/7);
    int rs = (int)ceil((double)(s * m)/ n);
    if (rs > x) return -1;
    return rs;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        cout << solve(n, s, m) << "\n";
    }
}