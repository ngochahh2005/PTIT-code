#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void in(vector<int> a, int n) {
    for (int i = 0; i < n; i++) cout << a[i];
    cout << " ";
}

bool sinh(vector<int> &a, int n) {
    int k = n-2, l = n-1;
    while (a[k] < a[k+1] && k >= 0) k--;
    if (k < 0) return false;
    while (a[k] < a[l]) l--;
    swap(a[k], a[l]);
    reverse(a.begin()+k+1, a.end());
    return true;
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
        for (int i = 0; i < n; i++) a[i] = n-i;
        do {
            in(a, n);
        } while (sinh(a, n));
        cout << "\n";
    }
}