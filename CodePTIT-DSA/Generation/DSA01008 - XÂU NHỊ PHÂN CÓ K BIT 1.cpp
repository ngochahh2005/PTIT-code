#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[20];

void in(int n) {
    for (int i = 0; i < n; i++) cout << a[i];
    cout << "\n";
}

bool check(int k, int n) {
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) d++;
    }
    if (d == k) return true;
    return false;
}

bool sinh(int n) {
    int i = n-1;
    while (a[i] == 1 && i >= 0) i--;
    if (i < 0) return false;
    a[i] = 1;
    for (int j = i+1; j < n; j++) a[j] = 0;
    return true;
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
        fill(a, a+n, 0);
        do {
            if (check(k, n)) in(n);
        } while (sinh(n));
    }
}