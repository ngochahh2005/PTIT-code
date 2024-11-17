#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int check(string s) {
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    int tmp = (int)ceil((double)s.length() / 2);
    for (auto x : mp) {
        if (x.second > tmp) return false;
    }
    return true;
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