#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string reverseStr(string s) {
    stringstream ss(s);
    string w;
    stack<string> st;
    while (ss >> w) {
        st.push(w);
    }
    string rs = "";
    while (!st.empty()) {
        rs += st.top() + " ";
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
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << reverseStr(s) << "\n";
    }
}