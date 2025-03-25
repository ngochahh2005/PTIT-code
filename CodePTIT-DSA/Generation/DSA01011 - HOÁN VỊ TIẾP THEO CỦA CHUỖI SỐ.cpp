#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string s, str;
int n;

bool cmp(string a, string b) {
    if (a.length() == b.length()) return a > b;
    return a.length() > b.length();
}

void sinh() {
    int k = n-2, l = n-1;
    while (s[k] >= s[k+1] && k >= 0) k--;
    if (k < 0) return ;
    while (s[k] >= s[l]) l--;
    swap(s[k], s[l]);
    reverse(s.begin()+k+1, s.end());
    if (cmp(s, str)) return ;
    sinh();
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int o;
        cin >> o >> str;
        s = str;
        n = s.length();
        sinh();
        if (s == str) cout << o << " BIGGEST\n";
        else cout << o << " " << s << "\n"; 
    }
}