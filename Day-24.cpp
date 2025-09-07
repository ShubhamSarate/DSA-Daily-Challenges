#include <iostream>
#include <queue>
#include <vector>
#include <optional>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if (left && right) return root;
        return left ? left : right;
    }
};

TreeNode* buildTree(const vector<optional<int>>& nodes) {
    if (nodes.empty() || !nodes[0].has_value()) return nullptr;
    TreeNode* root = new TreeNode(nodes[0].value());
    queue<TreeNode*> q;
    q.push(root);
    int i = 1;
    while (!q.empty() && i < nodes.size()) {
        TreeNode* current = q.front(); q.pop();
        if (i < nodes.size() && nodes[i].has_value()) {
            current->left = new TreeNode(nodes[i].value());
            q.push(current->left);
        }
        i++;
        if (i < nodes.size() && nodes[i].has_value()) {
            current->right = new TreeNode(nodes[i].value());
            q.push(current->right);
        }
        i++;
    }
    return root;
}

TreeNode* findNode(TreeNode* root, int val) {
    if (!root) return nullptr;
    if (root->val == val) return root;
    TreeNode* left = findNode(root->left, val);
    if (left) return left;
    return findNode(root->right, val);
}

int main() {
    vector<optional<int>> tree = {3, 5, 1, 6, 2, 0, 8, nullopt, nullopt, 7, 4};
    TreeNode* root = buildTree(tree);
    TreeNode* p = findNode(root, 5);
    TreeNode* q = findNode(root, 1);
    Solution sol;
    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    cout << lca->val << endl;
    return 0;
}
