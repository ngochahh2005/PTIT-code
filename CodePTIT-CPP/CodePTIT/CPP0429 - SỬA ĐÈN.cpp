#include <bits/stdc++.h>
#define ll long long
#define lmt 100000
#define mod 1000000007
using namespace std;

int a[lmt+5], s[lmt+5];
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k, b, t;
    cin >> n >> k >> b;
    for (int i = 0; i < b; i++) {
        cin >> t;
        a[t-1] = 1;
    }
    for (int i = 0; i < n; i++) {
        if (i == 0) 
            s[i] = a[i];
        else if (i < k) 
            s[i] = s[i-1] + a[i];
        else 
            s[i] = s[i-1] + a[i] - a[i-k];   
    }
    int mi = 1e9;
    for (int i = k-1; i < n; i++) {
        mi = min(mi, s[i]);
    }
    cout << mi << "\n";
}