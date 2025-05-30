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

map<int, tree> mp;
void buildTree(tree &node, int u, int v, char c) {
    if (mp.find(u) == mp.end()) mp[u] = new Node(u);
    if (mp.find(v) == mp.end()) mp[v] = new Node(v);
    if (c == 'L') mp[u]->left = mp[v];
    else mp[u]->right = mp[v];
    if (!node) node = mp[u];
}

bool ck;

void compare(tree node1, tree node2) {
    if ((!node1 && !node2) || !ck) return;
    if (node1->data != node2->data) {
        ck = false;
        return ;
    }
    if ((!node1->left && node2->left) || (node1->left && !node2->left)) {
        ck = false;
        return ;
    }
    if ((!node1->right && node2->right) || (node1->right && !node2->right)) {
        ck = false;
        return ;
    }
    compare(node1->left, node2->left);
    if (!ck) return ;
    compare(node1->right, node2->right);
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        ck = true;

        mp.clear();
        tree node1 = nullptr;
        cin >> n;
        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            buildTree(node1, u, v, c);
        }

        mp.clear();
        tree node2 = nullptr;
        cin >> n;
        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            buildTree(node2, u, v, c);
        }

        compare(node1, node2);
        cout << ck << "\n";
    }
}