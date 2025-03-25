#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int ma4(int a, int b, int c, int d) {
    return max(a, max(b, max(c, d)));
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int rs = ma4(a[0] * a[1], a[0] * a[1] * a[n-1], a[n-1] * a[n-2], a[n-1] * a[n-2] * a[n-3]);
    cout << rs;
}