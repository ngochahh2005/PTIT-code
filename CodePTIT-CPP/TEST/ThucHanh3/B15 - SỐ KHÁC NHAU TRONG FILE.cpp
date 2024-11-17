#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    ifstream fi("DATA.in");

    map<int, int> mp;
    int t;
    while (fi >> t) {
        mp[t]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second << "\n";
    }
    
    fi.close();
}