#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int a[20];

void in(int k) {
    for (int i = 0; i < k; i++) cout << a[i];
    cout << " ";
}

bool sinh(int n, int k) {
    int i = k-1;
    while (a[i] == n-k+i+1 && i >= 0) i--;
    if (i < 0) return false;
    a[i]++;
    for (int j = i+1; j < n; j++) a[j] = a[j-1] + 1;
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
        for (int i = 0; i < n; i++) a[i] = i+1;
        do {
            in(k);
        } while (sinh(n, k));
        cout << "\n";
    }
}