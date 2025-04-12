#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

bool priority(char a, char b) {
    return precedence(a) >= precedence(b);
}

string change(string s) {
    stack<char> st;
    string rs = "";
    
    for (char c : s) {
        if (c == '(') st.push(c);
        else if (isalpha(c)) rs += c;
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                rs += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop();
        } else {
            while (!st.empty() && priority(st.top(), c)) {
                rs += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        rs += st.top();
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
        cout << change(s) << "\n";
    }
}