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
    else if (node->data > x) insert(node->left, x);
    else insert(node->right, x);
}

bool isLeaf(tree node) {
    return node && !node->left && !node->right;
}

void printLeaves(tree node) {
    if (!node) return ;
    if (isLeaf(node)) cout << node->data << " ";
    printLeaves(node->left);
    printLeaves(node->right);
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
        printLeaves(node);
        cout << "\n";
    }
}