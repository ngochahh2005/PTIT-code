#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void backTrack(int a[], int n, string &s) {
    if (n == 1) return ;
    string rs = "[";
    for (int i = 0; i < n-1; i++) {
        a[i] = a[i] + a[i+1];
        if (i == 0) rs += to_string(a[i]);
        else rs += " " + to_string(a[i]);
    }
    rs += "] ";
    s = rs + s;
    backTrack(a, n-1, s);
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
        string s = "[";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i == 0) s += to_string(a[i]);
            else s += " " + to_string(a[i]);
        }
        s += "] ";
        backTrack(a, n, s);
        cout << s << "\n";
    }
}