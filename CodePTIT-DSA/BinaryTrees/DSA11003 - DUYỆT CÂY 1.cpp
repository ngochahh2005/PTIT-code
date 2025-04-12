#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, cnt = 0;
int in[1005], pre[1005];
map<int, int> mp;

typedef struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int x) : data(x), left(nullptr), right(nullptr) {}
}*tree; 

tree buildTree(int l, int r) {
    if (l > r) return nullptr;
    tree node = new Node(pre[cnt++]);
    node->left = buildTree(l, mp[node->data] - 1);
    node->right = buildTree(mp[node->data] + 1, r);
    return node;
}

void LRN(tree node) {
    if (node == nullptr) return ;
    LRN(node->left);
    LRN(node->right);
    cout << node->data << " ";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        mp.clear();
        cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> in[i];
            mp[in[i]] = i;
        }
        for (int i = 0; i < n; i++) cin >> pre[i];
        tree node = buildTree(0, n-1);
        LRN(node);
        cout << "\n";
    }
}