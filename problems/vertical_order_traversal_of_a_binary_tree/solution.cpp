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
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        map<int, map<int , vector<int> > > nodes;
        queue<pair<TreeNode* , pair<int, int> > > q;
        q.push({root, {0, 0}});
        while(!q.empty()){
            int n = q.size();
            for(int i = 0; i < n; i++){
                TreeNode* node = q.front().first;
                int hd = q.front().second.first;
                int lev = q.front().second.second;
                q.pop();

                nodes[hd][lev].push_back(node->val);

                if(node->left) q.push({node->left, {hd-1, lev+1}});
                if(node->right) q.push({node->right, {hd+1, lev+1}});
            }
        }

        for(auto p : nodes){
                vector<int> level;
                for (auto q : p.second){
                    sort(q.second.begin(), q.second.end());
                    level.insert(level.end(), q.second.begin(), q.second.end());
                }
                ans.push_back(level);
        }

        return ans;
    }
};