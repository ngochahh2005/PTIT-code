#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int check(string s, int d) {
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    int n = s.length();
    for (auto x : mp) {
        if ((x.second - 1) * d + 1 > n) return -1;
    }
    return 1;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int d;
        string s;
        cin >> d >> s;
        cout << check(s, d) << "\n";
    }
}