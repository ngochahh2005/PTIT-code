#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, tmp;
    cin >> n;
    vector<int> ev, od;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (i % 2 == 0) ev.push_back(tmp);
        else od.push_back(tmp);
    }
    sort(ev.begin(), ev.end());
    sort(od.begin(), od.end(), greater<int>());
    int i = 0, j = 0, n1 =  ev.size(), n2 = od.size();
    while (i < n1 || j < n2) {
        if (i < n1) cout << ev[i++] << " ";
        if (j < n2) cout << od[j++] << " ";
    }
}