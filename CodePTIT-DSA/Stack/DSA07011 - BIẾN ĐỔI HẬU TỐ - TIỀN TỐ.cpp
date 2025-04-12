#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string change(string s) {
    stack<string> st;
    for (char c : s) {
        if (isalpha(c)) st.push(string(1, c));
        else {
            if (st.empty()) continue;
            string b = st.top(); st.pop();
            string a = st.top(); st.pop();
            string tmp = c + a + b;
            st.push(tmp);
        }
    }
    return st.top();
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
        cout << change(s) << "\n";
    }
}