#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

typedef struct Node {
    int data;
    Node *left;
    Node *right;
    int level;
    Node (int x) : data(x), left(nullptr), right(nullptr), level(1) {}
} *tree;

int depth;

void insert(tree &node, int x) {
    if (!node) node = new Node(x);
    else if (x < node->data) {
        insert(node->left, x);
        node->left->level = node->level + 1;
    } else {
        insert(node->right, x);
        node->right->level = node->level + 1;
    }
    depth = max(depth, node->level);
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
        tree node = nullptr;
        depth = 1;
        while (n--) {
            int x;
            cin >> x;
            insert(node, x);
        }
        cout << depth << "\n";
    }
}