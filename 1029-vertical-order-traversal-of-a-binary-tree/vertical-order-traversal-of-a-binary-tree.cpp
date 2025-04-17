/**
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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
          if (!root) return {}; // Return empty vector if tree is empty
        
        // Map to store nodes at each vertical level
        map<int, vector<int>> verticalLevels;
        
        // Queue for level-order traversal
        queue<pair<TreeNode*, int>> q; // Node and its horizontal distance
        
        // Initialize queue with root node at horizontal distance 0
        q.push({root, 0});
        
        // Perform level-order traversal
        while (!q.empty()) {
            int size = q.size();
            map<int, vector<int>> tempVerticalLevels; // Temporary map for this level
            
            // Process nodes at current level
            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front().first;
                int hDist = q.front().second;
                q.pop();
                
                // Add current node's value to corresponding vertical level
                tempVerticalLevels[hDist].push_back(node->val);
                
                // Enqueue left child with updated horizontal distance
                if (node->left) q.push({node->left, hDist - 1});
                
                // Enqueue right child with updated horizontal distance
                if (node->right) q.push({node->right, hDist + 1});
            }
            
            // Merge temporary vertical levels into main map
            for (auto& entry : tempVerticalLevels) {
                sort(entry.second.begin(), entry.second.end()); // Sort values within each vertical level
                verticalLevels[entry.first].insert(verticalLevels[entry.first].end(), entry.second.begin(), entry.second.end());
            }
        }
        
        // Extract vertical levels from map and store in result vector
        vector<vector<int>> result;
        for (auto& entry : verticalLevels) {
            result.push_back(entry.second);
        }
        
        return result;
    }
};