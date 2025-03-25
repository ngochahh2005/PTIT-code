#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int check(string s) {
    int tmp = (s.length() + 1) / 2;
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    for (auto x : mp) {
        if (x.second > tmp) return -1;
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
        string s;
        cin >> s;
        cout << check(s) << "\n";
    }
}