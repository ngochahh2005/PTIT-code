#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int level = 0;

typedef struct Node {
    int data;
    Node *left;
    Node *right;
    int lv;

    Node (int vl) : data(vl), left(nullptr), right(nullptr), lv(1){}
}*tree;

tree search(tree node, int x) {
    if (node == nullptr) return nullptr;
    if (node->data == x) return node;
    tree left = search(node->left, x);
    if (left != nullptr) return left;
    return search(node->right, x);
}

tree makeRoot(tree node, int x) {
    node = new Node(x);
    return node;
}

void addLeft(tree &node, int u, int v) {
    if (node == nullptr) node = makeRoot(node, u);
    tree p = search(node, u);
    tree q = new Node(v);
    q->lv = p->lv + 1;
    p->left = q; 
    level = max(level, q->lv);
}

void addRight(tree &node, int u, int v) {
    if (node == nullptr) node = makeRoot(node, u);
    tree p = search(node, u);
    tree q = new Node(v);
    q->lv = p->lv + 1;
    p->right = q;
    level = max(level, q->lv);
}
  
bool check(tree node) {
    if (node == nullptr) return true;
    if (node != nullptr && node->left == nullptr && node->right == nullptr) 
        return node->lv == level;
    bool left = check(node->left);
    bool right = check(node->right);
    return left && right;
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
        level = 0;
        tree node = nullptr;
        for (int i = 0; i < n; i++) {
            int u, v;
            char x;
            cin >> u >> v >> x;
            if (x == 'L') addLeft(node, u, v);
            else addRight(node, u, v);
        }
        cout << check(node) << "\n";
    }
}