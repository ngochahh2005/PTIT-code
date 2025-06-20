#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

typedef struct Node{
    int data;
    Node *left;
    Node *right;

    Node (int vl) : data(vl), left(nullptr), right(nullptr) {}
} *tree;

struct edges {
    int u, v;
    char c;

    edges (int U, int V, int C) : u(U), v(V), c(C) {}
};

tree buildTree(int n, vector<edges> ed) {
    map<int, tree> mp;
    tree root = nullptr;
    
    for (auto x : ed) {
        int u = x.u, v = x.v;
        char c = x.c;
        if (mp.find(u) == mp.end()) {
            mp[u] = new Node(u);
        }
        if (mp.find(v) == mp.end()) {
            mp[v] = new Node(v);
        }
        if (c == 'L') {
            mp[u]->left = mp[v];
        } else {
            mp[u]->right = mp[v];
        }
        if (root == nullptr) root = mp[u];
    }
    return root;
}

void spiralOrder(tree root) {
    if (root == nullptr) return ;

    stack<tree> lr;
    stack<tree> rl;

    lr.push(root);

    while (lr.size() || rl.size()) {
        while (lr.size()) {
            tree node = lr.top(); lr.pop();
            cout << node->data << " ";
            if (node->right) rl.push(node->right);
            if (node->left) rl.push(node->left);
        }
        while (rl.size()) {
            tree node = rl.top(); rl.pop();
            cout << node->data << " ";
            if (node->left) lr.push(node->left);
            if (node->right) lr.push(node->right);
        }
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
        int n;
        cin >> n;
        vector<edges> ed;
        for (int i = 0; i < n; i++) {
            int u, v; char c;
            cin >> u >> v >> c;
            ed.push_back(edges(u, v, c));
        }

        tree node = buildTree(n, ed);
        spiralOrder(node);
    }
}