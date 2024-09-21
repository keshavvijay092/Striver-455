 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;

        queue<TreeNode*> qt;
        qt.push(root);
        qt.push(NULL);  // Level delimiter
        vector<int> val;
        bool normal = true;  // To track the order of insertion

        while (!qt.empty()) {
            TreeNode* newNode = qt.front();
            qt.pop();

            if (newNode == NULL) {
                // We've reached the end of a level
                if (!normal) {
                    reverse(val.begin(), val.end());
                }
                ans.push_back(val);
                val.clear();
                normal = !normal;  // Toggle the direction

                // Push NULL to mark end of the next level if there are still nodes
                if (!qt.empty()) {
                    qt.push(NULL);
                }
            } else {
                val.push_back(newNode->val);

                if (newNode->left) qt.push(newNode->left);
                if (newNode->right) qt.push(newNode->right);
            }
        }

        return ans;
    }
};
