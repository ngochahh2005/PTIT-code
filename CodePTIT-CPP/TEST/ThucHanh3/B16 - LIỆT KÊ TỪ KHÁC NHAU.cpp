#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ifstream fi("VANBAN.in");

    set<string> se;
    string s;
    while (fi >> s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        se.insert(s);
    }
    for (auto x : se) {
        cout << x << "\n";
    }

    fi.close();
}