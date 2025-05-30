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

void check(tree node) {
    if (!node || !ck) return ;
    if ((!node->left && node->right) || (node->left && !node->right)) {
        ck = false;
        return ;
    } 
    check(node->left);
    if (!ck) return ;
    check(node->right);

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
        mp.clear();
        ck = true;
        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            buildTree(node, u, v, c);
        }
        check(node);
        cout << ck << "\n";
    }
}