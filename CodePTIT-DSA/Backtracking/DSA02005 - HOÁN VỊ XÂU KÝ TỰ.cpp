#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string s;
int a[15], n, dd[15];

void in() {
    for (int i = 0; i < n; i++) cout << s[a[i]];
    cout << " ";
}

void Try(int i) {
    if (i == n) {
        in();
        return ;
    }
    for (int j = 0; j < n; j++) {
        if (dd[j] == 0) {
            dd[j] = 1;
            a[i] = j;
            Try(i+1);
            dd[j] = 0;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        n = s.length();
        for (int i = 0; i < n; i++) {
            dd[i] = 0;
            a[i] = i;
        }
        Try(0);
        cout << "\n";
    }
}