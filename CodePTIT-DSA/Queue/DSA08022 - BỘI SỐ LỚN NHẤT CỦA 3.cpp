#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void greatestMul(int a[], int n) {
    vector<int> rs;
    queue<int> q1, q2;
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += a[i];
        if (a[i] % 3 == 0) rs.push_back(a[i]);
        else if (a[i] % 3 == 1) q1.push(a[i]);
        else q2.push(a[i]);
    }

    if (s % 3 == 1) {
        if (q1.size()) q1.pop();
        else if (q2.size() >= 2) {
            q2.pop();
            q2.pop();
        } else {
            cout << "-1\n";
            return;
        }
    }

    if (s % 3 == 2) {
        if (q2.size()) q2.pop();
        else if (q1.size() >= 2) {
            q1.pop();
            q1.pop();
        } else {
            cout << "-1\n";
            return;
        }
    }
    
    while (q1.size()) {
        rs.push_back(q1.front());
        q1.pop();
    }
    while (q2.size()) {
        rs.push_back(q2.front());
        q2.pop();
    }
    if (rs.empty()) {
        cout << "-1\n";
        return;
    }

    sort(rs.begin(), rs.end(), greater<int>());

    if (rs[0] == 0) {
        cout << "0\n";
        return ;
    }

    for (int i = 0; i < rs.size(); i++) cout << rs[i];
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        greatestMul(a, n);
    }
}