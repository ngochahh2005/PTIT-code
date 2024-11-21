#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    ifstream fi("DATA.in");

    set<int> s1, s2;
    map<int, int> mp;
    int n, m, tmp;
    fi >> n >> m;
    for (int i = 0; i < n; i++) {
        fi >> tmp;
        if (s1.find(tmp) == s1.end()) mp[tmp]++;
        s1.insert(tmp);
    }
    for (int i = 0; i < n; i++) {
        fi >> tmp;
        if (s2.find(tmp) == s2.end()) mp[tmp]++;
        s2.insert(tmp);
    }
    for (auto x : mp) {
        if (x.second > 1) cout << x.first << " ";
    }

    fi.close();
}