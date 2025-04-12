#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

typedef struct Node {
    char data;
    Node *left;
    Node *right;

    Node (char value) : data(value), left(nullptr), right(nullptr) {}
}*Tree;

Tree toTree(string s) {
    stack<Tree> st;
    for (char c : s) {
        if (isalpha(c)) st.push(new Node(c));
        else {
            Tree node = new Node(c);
            node->right = st.top(); st.pop();
            node->left = st.top(); st.pop();
            st.push(node);
        }
    }
    return st.top();
}

void LNR(Tree node, vector<char> &rs) {
    if (node == nullptr) return ;
    LNR(node->left, rs);
    rs.push_back(node->data);
    LNR(node->right, rs);
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
        Tree node = toTree(s);
        vector<char> rs;
        LNR(node, rs);
        for (char c : rs) cout << c;
        cout << "\n";
    }
}