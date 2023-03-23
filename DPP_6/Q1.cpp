// Preorder Traversal (Leetcode:144)

void POT( TreeNode* root, vector<int> &ans){
         if(root==NULL){
             return;
         }
         ans.push_back(root->val);
         POT(root->left,ans);
         POT(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
          vector<int> ans;
          POT(root,ans);
          return ans;
    }

// Inorder Traversal (Leetcode:94)

void IOT( TreeNode* root, vector<int> &ans){
         if(root==NULL){
             return;
         }
         // LNR
          IOT(root->left, ans);
          ans.push_back(root->val);
          IOT(root->right, ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
          vector<int> ans;
          IOT(root, ans);
          return ans;
    }

// Postorder Traversal (Leetcode:145)
 void POT( TreeNode* root, vector<int> &ans){
         if(root==NULL){
             return;
         }
         POT(root->left, ans);
         POT(root->right, ans);
         ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
            
            vector<int> ans ;
            POT(root, ans);
            return ans;
    }
