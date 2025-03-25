#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool check(int a[], int n) {
    for (int i = 0, j = n-2; i < n/2, j >= n/2; i++, j--) {
        int x = a[i+1] - a[i];
        int y = a[j+1] - a[j];
        if ((x > 0 && y < 0) || (x < 0 && y > 0)) return false;
    }
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
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        if (check(a, n)) cout << "Yes\n";
        else cout << "No\n";
    }
}