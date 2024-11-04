#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) return new TreeNode(val);
        TreeNode* curr = root;
        while (true) {
            if (curr->val < val) {
                if (curr->right) curr = curr->right;
                else {
                    curr->right = new TreeNode(val);
                    break;
                }
            } else {
                if (curr->left) curr = curr->left;
                else {
                    curr->left = new TreeNode(val);
                    break;
                }
            }
        } return root;
    }
};
