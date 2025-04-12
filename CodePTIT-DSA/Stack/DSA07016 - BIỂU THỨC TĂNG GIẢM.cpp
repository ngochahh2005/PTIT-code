#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void solve(string s) {
    stack<int> st;
    st.push(1);
    int cnt = 2;
    for (char c : s) {
        if (c == 'I') {
            while (!st.empty()) {
                cout << st.top();
                st.pop();
            }
        }
        st.push(cnt);
        cnt++;
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
        cout << "\n";
    }
}