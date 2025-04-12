#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int tinh(string s) {
    stack<int> st;
    for (char c : s) {
        if (isdigit(c)) {
            st.push(c - '0');
        } else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            int tmp = 0;
            if (c == '+') tmp = a + b;
            else if (c == '-') tmp = a - b;
            else if (c == '*') tmp = a * b;
            else tmp = a / b;
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
        cout << tinh(s) << "\n";
    }
}