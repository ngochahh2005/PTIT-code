#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int longest(string s) {
    stack<int> st;
    int rs = 0, cnt = 0, last = -1;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '(') st.push(i);
        else {
            if (!st.empty()) {
                int tmp = st.top(); st.pop();
                cnt = st.empty() ? i - last : i - st.top();
                rs = max(rs, cnt);
            } else last = i;
        }
    }
    return rs;
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
        cout << longest(s) << "\n";
    }
}