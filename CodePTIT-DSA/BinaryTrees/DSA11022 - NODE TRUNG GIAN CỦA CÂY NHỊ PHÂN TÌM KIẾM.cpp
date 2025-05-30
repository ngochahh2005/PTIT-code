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

void insert(tree &node, int x) {
    if (!node) node = new Node(x);
    else if (x < node->data) insert(node->left, x);
    else insert(node->right, x);
}

bool isleaf(tree node) {
    return node && !node->left && !node->right;
}

int count(tree node) {
    if (!node || isleaf(node)) return 0;
    return count(node->left) + count(node->right) + 1;
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
        while (n--) {
            int x;
            cin >> x;
            insert(node, x);
        }

        cout << count(node) << "\n";
    }
}