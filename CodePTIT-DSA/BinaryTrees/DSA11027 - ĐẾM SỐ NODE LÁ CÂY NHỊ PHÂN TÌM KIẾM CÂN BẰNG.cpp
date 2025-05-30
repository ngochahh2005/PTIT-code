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
} *tree;

vector<int> a;

void buildtree(tree &node, int l, int r) {
    if (l > r) return ;
    int m = (l+r)/2;
    if (!node) node = new Node(a[m]);
    buildtree(node->left, l, m-1);
    buildtree(node->right, m+1, r);
}

bool isleaf(tree node) {
    return node && !node->left && !node->right;
}

int countLeaves(tree node) {
    if (!node) return 0;
    if (isleaf(node)) return 1;
    return countLeaves(node->left) + countLeaves(node->right);
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
        cout << countLeaves(node) << "\n";
    }
}