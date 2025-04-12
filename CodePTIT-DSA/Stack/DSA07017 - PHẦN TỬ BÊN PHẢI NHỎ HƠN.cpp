#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void solve(int a[], int n) {
    stack<int> st;
    vector<int> bg(n), rs(n);
    for (int i = n-1; i >= 0; i--) {
        while (!st.empty() && a[i] >= a[st.top()]) st.pop();
        if (st.empty()) bg[i] = -1;
        else bg[i] = st.top();
        st.push(i);
    }

    stack<int> s;
    for (int i = n-1; i >= 0; i--) {
        while (!s.empty() && a[i] <= a[s.top()]) s.pop();
        if (s.empty()) rs[i] = -1;
        else rs[i] = s.top();
        s.push(i);
    }
    
    for (int i = 0; i < n; i++) {
        if (bg[i] == -1) cout << "-1 ";
        else {
            if (rs[bg[i]] == -1) cout << "-1 ";
            else cout << a[rs[bg[i]]] << " ";
        }
    }
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
        int *a;
        a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        solve(a, n);
    }
}