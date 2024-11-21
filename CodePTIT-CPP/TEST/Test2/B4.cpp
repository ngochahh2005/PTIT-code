#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

ll fi[95];
void fibo() { 
    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i <= 92; i++) {
        fi[i] = fi[i-1] + fi[i-2];
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    fibo();
    // for (int i = 0; i <= 92; i++) cout << fi[i] << " ";
    int t;
    cin >> t;
    
    while (t--) {
        ll n;
        cin >> n;
        if (binary_search(fi, fi+93, n)) cout << "YES\n";
        else cout << "NO\n";
    }
}