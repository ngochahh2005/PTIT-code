#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string decode(string s) {
    stack<char> st;
    string rs = "";
    for (char c : s) {
        if (c == ']') {
            string tmp = "", str = "";
            while (!st.empty() && st.top() != '[') {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            string nb;
            while (!st.empty() && isdigit(st.top())) {
                nb = st.top() + nb;
                st.pop();
            }
            int n = nb.empty() ? 1 : stoi(nb);
            for (int i = 0; i < n; i++) str += tmp;
            for (char x : str) st.push(x);
        } else st.push(c);
        
    }
    while (!st.empty()) {
        rs = st.top() + rs;
        st.pop();
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
        cout << decode(s) << "\n";
    }
}