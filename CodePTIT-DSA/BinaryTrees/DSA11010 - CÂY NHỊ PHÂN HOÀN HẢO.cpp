#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
typedef struct Node {
    int data, level;
    Node *left;
    Node *right;
    Node (int vl) : data(vl), left(nullptr), right(nullptr), level(1) {}
} *tree;

map<int, tree> mp;
int lv;

void buildTree(tree &node, int u, int v, char c) {
    if (mp.find(u) == mp.end()) mp[u] = new Node(u);
    if (mp.find(v) == mp.end()) mp[v] = new Node(v);
    if (c == 'L') {
        mp[u]->left = mp[v];
        mp[v]->level = mp[u]->level + 1;
    } else {
        mp[u]->right = mp[v];
        mp[v]->level = mp[u]->level + 1;
    }
    lv = max(lv, mp[v]->level);
    if (!node) node = mp[u];
}

bool ck;

void check(tree node, int lv) {
    if (!node) return ;
    if (!node->left && !node->right && lv != node->level) {
        ck = false;
        return ;
    }
    if (!node->left && node->right) {
        ck = false;
        return ;
    }
    if (node->left && !node->right) {
        ck = false;
        return ;
    }
    check(node->left, lv);
    check(node->right, lv);

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
        mp.clear();
        lv = 0;
        ck = true;
        tree node = nullptr;
        for (int i = 0; i < n; i++) {
            int u, v; char c;
            cin >> u >> v >> c;
            buildTree(node, u, v, c);
        }
        check(node, lv);
        if (ck) cout << "Yes\n";
        else cout << "No\n";
    }
}