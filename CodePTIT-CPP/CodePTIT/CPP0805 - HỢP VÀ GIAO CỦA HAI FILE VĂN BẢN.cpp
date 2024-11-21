#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    ifstream f1("DATA1.in");
    ifstream f2("DATA2.in");

    string s;
    set<string> s1, s2;
    map<string, int> mp;
    while (f1 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s1.find(s) == s1.end()) mp[s]++;
        s1.insert(s);
    }
    while (f2 >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s2.find(s) == s2.end()) mp[s]++;
        s2.insert(s);
    }
    for (auto x : mp) {
        cout << x.first << " ";
    }
    cout << "\n";
    for (auto x : mp) {
        if (x.second > 1) cout << x.first << " ";
    }

    f1.close();
    f2.close();
}