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
    int ans=0,dis;
    // we do a dfs and each node passes the distance vector which is list of leaf node
    //distances from that node
    
    vector<int> dfs(TreeNode* root)
    {
        if(!root)
            return {};
        if(!root->left && !root->right)
            return {1};
        vector<int> l=dfs(root->left);
        vector<int> r=dfs(root->right);
        for(int a:l)
        {
            for(int b:r)
            {
                if(a+b<=dis)
                    ans++;
            }
        }
        vector<int> ret;
        for(int a:l)
            if(a+1<dis)
                ret.push_back(a+1);
        for(int a:r)
            if(a+1<dis)
                ret.push_back(a+1);
        return ret;
        
    }
    int countPairs(TreeNode* root, int distance) {
        
        ans=0;dis=distance;
        vector<int> v=dfs(root);
        return ans;
        
    }
};