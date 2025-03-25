#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void sinh(vector<int> a, int n) {
    int k = n-2, l = n-1;
    while (a[k] > a[k+1] && k >= 0) k--;
    if (k < 0) {
        for (int i = n-1; i >= 0; i--) cout << a[i] << " ";
        cout << "\n";
        return ;
    }
    while (a[k] > a[l]) l--;
    swap(a[k], a[l]);
    reverse(a.begin() + k + 1, a.begin() + n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sinh(a, n);
    }
}