#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int tinh(string s) {
    stack<int> st;
    int l = s.size();
    for (int i = l-1; i >= 0; i--) {
        char c = s[i];
        if (isdigit(c)) st.push(c - '0');
        else {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            int tmp;
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