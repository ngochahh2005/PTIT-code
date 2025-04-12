#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

typedef struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int vl) : data(vl), left(nullptr), right(nullptr) {}
}*tree;

tree search(tree node, int x) {
    if (node == nullptr) return nullptr;
    if (node->data == x) return node;
    tree left = search(node->left, x);
    if (left != nullptr) return left;
    return search(node->right, x);
}

void addLeft(tree &node, int u, int v) {
    if (node == nullptr) node = new Node(u);
    tree p = nullptr, q = nullptr;
    p = search(node, u);
    q = new Node(v);
    p->left = q;
}

void addRight(tree &node, int u, int v) {
    if (node == nullptr) node = new Node(u);
    tree p = nullptr, q = nullptr;
    p = search(node, u);
    q = new Node(v);
    p->right = q;
}
  
void levelOrder(tree node) {
    queue<tree> qu;
    qu.push(node);
    while (qu.size()) {
        tree p = qu.front(); qu.pop();
        cout << p->data << " ";
        if (p->left != nullptr) qu.push(p->left);
        if (p->right != nullptr) qu.push(p->right);
    }
    cout << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int u, v, n;
        char x;
        cin >> n;
        tree node = nullptr;
        for (int i = 0; i < n; i++) {
            cin >> u >> v >> x;
            if (x == 'L') addLeft(node, u, v);
            else addRight(node, u, v);
        }
        levelOrder(node);
    }
}