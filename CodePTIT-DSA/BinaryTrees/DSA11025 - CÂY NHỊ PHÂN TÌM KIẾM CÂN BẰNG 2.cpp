#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[lmt];

typedef struct Node {
    int data;
    Node *left;
    Node *right;
    Node (int x) : data(x), left(nullptr), right(nullptr) {}
}*tree;

void buildTree(tree &node, int l, int r) {
    if (l > r) return ;
    int mid = (l+r)/2;
    if (!node) node = new Node(a[mid]);
    buildTree(node->left, l, mid-1);
    buildTree(node->right, mid+1, r);
}

void preorder(tree node) {
    if (!node) return;
    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
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
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        tree node = nullptr;
        buildTree(node, 0, n-1);
        preorder(node);
        cout << "\n";
    }
}