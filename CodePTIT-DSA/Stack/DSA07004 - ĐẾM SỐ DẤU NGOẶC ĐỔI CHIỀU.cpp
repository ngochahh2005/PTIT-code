#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int count(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == ')' && !st.empty()) {
            if (st.top() == '(') st.pop();
            else st.push(c);
        } else st.push(c);
    }
    int sz = st.size(), cnt = 0;
    while (!st.empty()) {
        if (st.top() == '(') cnt++;
        st.pop();
    }
    return sz / 2 + cnt % 2;
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
        cout << count(s) << "\n";
    }
}