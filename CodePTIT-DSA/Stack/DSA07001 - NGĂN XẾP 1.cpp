#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void print(stack<string> st) {
    if (st.empty()) {
        cout << "empty\n";
        return;
    }
    vector<string> v;
    while (!st.empty()) {
        v.push_back(st.top());
        st.pop();
    }
    reverse(v.begin(), v.end());
    for (string x : v) {
        cout << x << " ";
    }
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    stack<string> st;
    while (cin >> s) {
        if (s == "push") {
            string n;
            cin >> n;
            st.push(n);
        } else if (s == "show") {
            print(st);
        } else {
            st.pop();
        }
    }
}