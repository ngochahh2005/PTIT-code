#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tmp;
    map<int, int> mp;
    vector<int> v;
    while (cin >> tmp) {
        if (mp.find(tmp) == mp.end()) v.emplace_back(tmp);
        mp[tmp]++;
    }
    for (int i = 0; i < v.size(); i++) cout << v[i] << " " << mp[v[i]] << "\n";
}