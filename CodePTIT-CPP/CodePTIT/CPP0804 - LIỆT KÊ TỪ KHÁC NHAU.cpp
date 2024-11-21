#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    ifstream fi("VANBAN.in");
    string s;
    set<string> se;
    while (fi >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        se.insert(s);
    }
    for (auto x : se) {
        cout << x << "\n";
    }

    fi.close();
}