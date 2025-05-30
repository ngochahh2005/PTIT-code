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

vector<int> a;

void buildtree(tree &node, int l, int r) {
    if (l > r) return ;
    int mid = (l+r)/2;
    if (!node) node = new Node(a[mid]);
    buildtree(node->left, l, mid-1);
    buildtree(node->right, mid+1, r);
}

void postorder(tree node) {
    if (!node) return ;
    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
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
        a.resize(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        tree node = nullptr;
        buildtree(node, 0, n-1);
        postorder(node);
        cout << "\n";
    }
}