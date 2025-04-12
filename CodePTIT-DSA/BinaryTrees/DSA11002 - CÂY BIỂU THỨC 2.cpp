#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
typedef struct Node {
    string data;
    ll vl;
    Node *left;
    Node *right;

    Node (string value) : data(value), left(nullptr), right(nullptr), vl(0) {}
}*tree;

tree toTree(string s[], int n) {
    queue<tree> st;
    for (int i = n-1; i >= 0; i--) {
        if (isdigit(s[i][0])) {
            tree node = new Node(s[i]);
            st.push(node);
        } else {
            tree node = new Node(s[i]);
            node->right = st.front(); st.pop();
            node->left = st.front(); st.pop();
            st.push(node);
        }
    }
    return st.front();
}

void LRN(tree &node) {
    if (node == nullptr) return ;
    LRN(node->left);
    LRN(node->right);
    if (node->data == "+") {
        node->vl = (node->left)->vl + (node->right)->vl;
    } else if (node->data == "-") {
        node->vl = (node->left)->vl - (node->right)->vl;
    } else if (node->data == "*") {
        node->vl = (node->left)->vl * (node->right)->vl;
    } else if (node->data == "/") {
        node->vl = (node->left)->vl / (node->right)->vl;
    } else {
        node->vl = stoll(node->data);
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];
        tree node = toTree(s, n);
        LRN(node);
        cout << node->vl << "\n";
    }
}