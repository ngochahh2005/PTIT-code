#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int comb(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; i++) {
        res = res * (n-i+1) / i;
    }
    return res;
}

int combRank(vector<int> &v, int n, int k) {
    int r = 1;
    for (int i = 0; i < k; i++) {
        for (int j = (i == 0 ? 1 : v[i-1] + 1); j < v[i]; j++) {
            r += comb(n-j, k-i-1);
        }
    }
    return r;
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
        vector<int> v(k);
        for (int i = 0; i < k; i++) cin >> v[i];
        cout << combRank(v, n, k) << "\n";
    }
}