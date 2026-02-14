#include <iostream>
#include <climits>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int maxSum = INT_MIN;

    int solve(TreeNode* root) {
        if (!root) return 0;

        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));

        // Update global maximum
        maxSum = max(maxSum, left + right + root->val);

        // Return single branch max
        return root->val + max(left, right);
    }

    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};

int main() {
    /*
            -10
            /  \
           9    20
               /  \
              15   7
    */

    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    Solution obj;
    cout << "Maximum Path Sum: " << obj.maxPathSum(root);

    return 0;
}
