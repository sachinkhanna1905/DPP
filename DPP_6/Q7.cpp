// Diameter of Binary Tree (Leetcode:543)


    pair<int,int> diameter(TreeNode* root){
         // pair<distance,height>
         //step1: Base condition
        if(root==NULL){
            pair<int,int> temp=make_pair(0,0);
            return temp;
        }
        pair<int,int> l=diameter(root->left);
        pair<int,int> r=diameter(root->right);
        // step2:left diameter and right diameter and curr diameter
        int a=l.first;
        int b=r.first;
        int h=l.second+r.second+1;
        //step3: while goign back to the previous recursive call we have to return a pair
        pair<int,int> ans;
        // diameter
        ans.first=max(max(a,b),h);
        // height
        ans.second=max(l.second,r.second)+1;
        return ans;
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        // diameter is edge between them
         return diameter(root).first-1;
         // pair<int,int> ans=diameter(root);
         // return ans.first-1;
    }



    // Height of Binary tree (Leetcode: 104)
    int maxDepth(TreeNode* root) {
         if(root==NULL){
             return 0;
         }
         return max(maxDepth(root->left),maxDepth(root->right))+1;
    }