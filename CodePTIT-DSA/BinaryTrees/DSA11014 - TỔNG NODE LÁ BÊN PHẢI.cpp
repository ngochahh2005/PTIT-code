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

void buildTree(int n, tree &node) {
    map<int, tree> mp;
    while (n--) {
        int u, v; char c;
        cin >> u >> v >> c;
        
        if (mp.find(u) == mp.end()) {
            node = new Node(u);
            mp[u] = node;
        }
        tree child = new Node(v);

        if (c == 'L') mp[u]->left = child;
        else mp[u]->right = child;
        mp[v] = child;
    }
}

bool isLeaf(tree node) {
    return node && !node->left && !node->right;
}

int sum(tree node) {
    if (!node) return 0;
    int rs = 0;

    if (isLeaf(node->right)) rs += node->right->data;
    rs += sum(node->right);

    if (node->left && !isLeaf(node->left)) rs += sum(node->left);
    return rs;
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
        buildTree(n, node);
        cout << sum(node) << "\n"; 
    }
}