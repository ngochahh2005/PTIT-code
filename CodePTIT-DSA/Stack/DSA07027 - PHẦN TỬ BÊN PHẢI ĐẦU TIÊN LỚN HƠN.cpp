#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void solve(int a[], int n) {
    stack<int> st;
    vector<int> rs;
    for (int i = n-1; i >= 0; i--) {
        while (!st.empty() && a[i] >= st.top()) st.pop();
        if (st.empty()) rs.push_back(-1);
        else rs.push_back(st.top());
        st.push(a[i]);
    }
    for (int i = n-1; i >= 0; i--) cout << rs[i] << " ";
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
        solve(a, n);
    }
}