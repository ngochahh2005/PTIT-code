#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string change(string s) {
    stack<string> st;
    int l = s.length();
    for (int i = l-1; i >= 0; i--) {
        char c = s[i];
        if (isalpha(c)) st.push(string(1, c));
        else {
            string tmp1 = st.top(); st.pop();
            string tmp2 = st.top(); st.pop();
            string tmp = "(" + tmp1 + c + tmp2 + ")";
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