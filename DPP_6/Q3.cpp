// Level order traversal line by line (leetcode:102)

vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>v;
            for(int i=0;i<size;i++){
                TreeNode* front=q.front();
                v.push_back(front->val);
                q.pop();
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }