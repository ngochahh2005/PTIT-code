#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

bool check(string s) {
    if (s.length() >= 9 && s > "2147483647") return false;
    for (char c : s) {
        if (!isdigit(c)) return false;
    }
    return true;
}
  
int main() {
    ifstream fi("DATA.in");
    string s;
    ll res = 0;
    while (fi >> s) {
        if (!check(s)) continue;
        res += stoi(s);
    }
    cout << res;
    fi.close();
}