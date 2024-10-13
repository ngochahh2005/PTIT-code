#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        cout << n*(n+1)/2 << "\n";
    }
}