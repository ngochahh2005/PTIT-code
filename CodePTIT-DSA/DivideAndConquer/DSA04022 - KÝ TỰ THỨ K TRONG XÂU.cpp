#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int dac(int n) {
    if (n == 1) return 2;
    if (n == 0) return 1;
    int tmp = dac(n/2);
    if (n % 2 == 0) return tmp * tmp;
    return 2 * tmp * tmp; 
}

char Find(int n, int k) {
    int x = dac(n-1);
    if (k == x) return 'A' + n - 1;
    if (k > x) return Find(n-1, k-x);
    return Find(n-1, k);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << Find(n, k) << "\n";
    }
}