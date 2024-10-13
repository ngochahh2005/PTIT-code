#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int check(string s) {
    unordered_map<char, int> mp;
    int l = s.length();
    for (int i = 0; i < l; i++) {
        mp[s[i]]++;
    }
    for (auto x : mp) {
        if (x.second > (int)ceil((double)l/2)) return 0;
    }
    return 1;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << check(s) << "\n";
    }
}