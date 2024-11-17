#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream f1("DATA1.in");
    ifstream f2("DATA2.in");

    set<string> s1, s2;
    string s;
    while (f1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s1.insert(s);
    }
    map<string, int> mp;
    for (auto x : s1) {
        mp[x]++;
    }
    while (f2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s2.insert(s);
    }
    for (auto x : s2) {
        mp[x]++;
    }
    for (auto x : mp) cout << x.first << " ";
    cout << "\n";
    for (auto x : mp) {
        if (x.second > 1) cout << x.first << " ";
    }

    f1.close();
    f2.close();
}