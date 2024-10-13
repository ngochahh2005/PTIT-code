#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string nb) {
    if (nb.length() == 1) return false;
    int l = 0, r = nb.length() - 1;
    while (l < r) {
        if (nb[l++] != nb[r--]) return false;
    }
    return true;
}

bool cmp(string a, string b) {
    if (a.length() == b.length()) return a > b;
    return a.length() > b.length();
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> a;
    string s;
    map<string, int> mp;
    while (cin >> s) {
        if (mp.find(s) == mp.end() && check(s)) a.push_back(s);
        mp[s]++;
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " " << mp[a[i]] << "\n";
    }
}