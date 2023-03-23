// Left view of Binary Tree


vector<int> leftView(Node *root){
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        queue<pair<Node*,int>> q;
        q.push(make_pair(root,0));
        map<int,int> map;
        while(!q.empty()){
             pair<Node*,int> temp=q.front();
             q.pop();
             Node* FrontNode=temp.first;
             int level=temp.second;
             if(map.find(level)==map.end()){
                 map[level]=FrontNode->data;
             }
             if(FrontNode->left!=NULL){
                 q.push(make_pair(FrontNode->left,level+1));
             }
             if(FrontNode->right!=NULL){
                 q.push(make_pair(FrontNode->right,level+1));
             }
        }
        for(auto i:map){
            ans.push_back(i.second);
        }
        return ans;
}



// Right view of Binary Tree (Leetcode: 199)

vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
          // Node and level
           queue<pair<TreeNode*,int>> q;
           q.push(make_pair(root,0));
           map<int,int> map;
           while(!q.empty()){
               pair<TreeNode*,int> temp=q.front();
               q.pop();
               TreeNode* frontnode=temp.first;
               int level=temp.second;
               map[level]=frontnode->val;
               // left and right subtree
               level=level+1;
               if(frontnode->left!=NULL){
                     q.push(make_pair(frontnode->left,level));
               } 
               if(frontnode->right!=NULL){
                     q.push(make_pair(frontnode->right,level));
               }
           }
           // traversal is completed now store the value in the vector
                for( auto i:map){
                    ans.push_back(i.second);
               }
               return ans;
    }