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
    int getFloor(TreeNode* root, int target) {
        int ans = -1;
        while (root) {
            if (root->val == target) {
                return root->val;
            } else if (root->val < target) {
                ans = root->val;
                root = root->right;
            } else {
                root = root->left;
            }
        } return ans;
    }
};
void getInorder(TreeNode* root) {
    if (!root) return;
    getInorder(root->left);
    cout << root->val << " ";
    getInorder(root->right);
}
int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(13);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(2);
    root->left->left->right = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->left->right->right = new TreeNode(9);
    root->right->left = new TreeNode(11);
    root->right->right = new TreeNode(14);
    
    cout << "Binary Search Tree: "<< endl;
    getInorder(root);
    cout << endl;

    Solution solution;
    int target = 8;
    int floor = solution.getFloor(root, target);
    
    if(floor != -1){
        cout << "Floor of " << target << " is: " << floor << endl;
    }
    else{
        cout << "No floor found!";
    }
    
    return 0;
}
