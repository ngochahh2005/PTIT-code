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

void buildTree(tree &node, int n) {
    map<int, tree> mp;
    while (n--) {
        int u, v; char c;
        cin >> u >> v >> c;

        if (mp.find(u) == mp.end()) {
            mp[u] = new Node(u);
            if (!node) node = mp[u];
        }
        tree child = new Node(v);

        if (c == 'L') mp[u]->left = child;
        else mp[u]->right = child;
        mp[v] = child;
    }
}

int smax(tree node, int &rs) {
    if (!node) return 0;

    int leftSum = smax(node->left, rs);
    int rightSum = smax(node->right, rs);

    if (!node->left && !node->right) return node->data;

    if (!node->left) return rightSum + node->data;

    if (!node->right) return leftSum + node->data;

    rs = max(rs, leftSum + rightSum + node->data);
    return max(leftSum, rightSum) + node->data;
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

        buildTree(node, n);

        int rs = INT_MIN;
        smax(node, rs);
        cout << rs << "\n";
    }
}