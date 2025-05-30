#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

typedef struct Node {
    int data;
    Node *left;
    Node *right;
    Node (int x) : data(x), left(nullptr), right(nullptr) {}
}*tree;
  
map<int, tree> mp;
vector<int> rs;

void buildTree(tree &node, int u, int v, char c) {
    if (mp.find(u) == mp.end()) mp[u] = new Node(u);
    if (mp.find(v) == mp.end()) mp[v] = new Node(v);
    if (c == 'L') mp[u]->left = mp[v];
    else mp[u]->right = mp[v];
    if (!node) node = mp[u];
}

void LNR(tree node) {
    if (!node) return ;
    LNR(node->left);
    rs.push_back(node->data);
    LNR(node->right);
}

void change(tree &node, int &i) {
    if (!node) return ;
    change(node->left, i);
    node->data = rs[i++];
    change(node->right, i);
}

void inOrder(tree node) {
    if (!node) return ;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
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
        rs.clear();
        tree node = nullptr;

        while (n--) {
            int u, v; char c;
            cin >> u >> v >> c;
            buildTree(node, u, v, c);
        }

        LNR(node);
        sort(rs.begin(), rs.end());
        int i = 0;
        change(node, i);
        inOrder(node);
        cout << "\n";
    }
}