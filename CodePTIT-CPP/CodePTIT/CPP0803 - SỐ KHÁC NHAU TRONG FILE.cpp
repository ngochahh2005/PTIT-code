#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    ifstream fi("DATA.in");
    int n;
    map<int, int> mp;
    while (fi >> n) {
        mp[n]++;
    }
    for (auto x : mp) {
        cout << x.first << " " << x.second << "\n";
    }
    fi.close();
}