#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

bool isOpen(char c) {
    if (c == '(' || c == '{' || c == '[') return true;
    return false;
}

bool isSame(char a, char b) {
    if (a == '(' && b == ')') return true;
    if (a == '{' && b == '}') return true;
    if (a == '[' && b == ']') return true;
    return false;
}

bool check(string s) {
    stack<char> st;
    for (char c : s) {
        if (isOpen(c)) st.push(c);
        else {
            if (st.empty() || !isSame(st.top(), c)) return false;
            st.pop();
        }
    }
    return st.empty() ? true : false;
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
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}