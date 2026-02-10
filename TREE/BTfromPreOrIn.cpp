#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* constructTree(
        vector<int>& preO, int preStart, int preEnd,
        vector<int>& inO, int inStart, int inEnd,
        unordered_map<int, int>& inMap
    ) {
        if (preStart > preEnd || inStart > inEnd)
            return NULL;

        TreeNode* root = new TreeNode(preO[preStart]);

        int inRoot = inMap[root->val];
        int numsLeft = inRoot - inStart;

        root->left = constructTree(
            preO, preStart + 1, preStart + numsLeft,
            inO, inStart, inRoot - 1, inMap
        );

        root->right = constructTree(
            preO, preStart + numsLeft + 1, preEnd,
            inO, inRoot + 1, inEnd, inMap
        );

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inMap;

        for (int i = 0; i < inorder.size(); i++) {
            inMap[inorder[i]] = i;
        }

        return constructTree(
            preorder, 0, preorder.size() - 1,
            inorder, 0, inorder.size() - 1,
            inMap
        );
    }
};

/* Helper: print inorder to verify tree */
void printInorder(TreeNode* root) {
    if (!root) return;
    printInorder(root->left);
    cout << root->val << " ";
    printInorder(root->right);
}

int main() {
    /*
        Preorder:  [3, 9, 20, 15, 7]
        Inorder:   [9, 3, 15, 20, 7]

        
    */

    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder  = {9, 3, 15, 20, 7};

    Solution sol;
    TreeNode* root = sol.buildTree(preorder, inorder);

    cout << "Inorder traversal of constructed tree: ";
    printInorder(root);

    return 0;
}
