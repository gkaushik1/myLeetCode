// https://leetcode.com/problems/binary-tree-paths/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void traverse(TreeNode* root, stringstream& path, vector<string>& paths)
    {
        bool leaf = true;
        if(root->left)
        {
            stringstream ss2;
            ss2 << path.str();
            ss2 << root->val;
            leaf = false;
            ss2 << "->";
            traverse(root->left,ss2,paths);
        }
        
        if(root->right)
        {
            stringstream ss2;
            ss2 << path.str();
            ss2 << root->val;
            leaf = false;
            ss2 << "->";
            traverse(root->right, ss2, paths);
        }
        
        if(leaf)
        {
            path << root->val;
            paths.push_back(path.str());
            return;
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> paths;
        stringstream path; 
        if(root)
        {
            traverse(root,path,paths);
        }
        return paths;
    }
};
